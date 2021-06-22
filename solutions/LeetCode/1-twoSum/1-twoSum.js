/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function(nums, target) {
  // Brute-force
  // for (let a = 0; a < nums.length; a++) {
  //     for (let b = 0; b < nums.length; b++) {
  //         if (a === b) break
  //         if (nums[a] + nums[b] === target) {
  //             return [a, b]
  //         }
  //     }
  // }
  // throw Error("No matches found")
  
  // Hashmap
  let hashMap = new Map()
  for (let i=0; i<nums.length; i++) {
      const complement = target - nums[i]
      
      if (hashMap.has(complement)) {
          return [hashMap.get(complement), i]
      }
      hashMap.set(nums[i], i)
  }
  throw Error("No matches found")
};