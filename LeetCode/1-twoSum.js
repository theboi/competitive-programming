/*
 * 1. Two Sum
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 *
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 */

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