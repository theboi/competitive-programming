/*
 * 3. Longest Substring Without Repeating Characters
 * Given a string, find the length of the longest substring without repeating
 * characters.
 *
 * Example 1:
 * Input: "abcabcbb"
 * Output: 3
 * Explanation: The answer is "abc", with the length of 3.
 *
 * Example 2:
 * Input: "bbbbb"
 * Output: 1
 * Explanation: The answer is "b", with the length of 1.
 *
 * Example 3:
 * Input: "pwwkew"
 * Output: 3
 * Explanation: The answer is "wke", with the length of 3. Note that the answer 
 * must be a substring, "pwke" is a subsequence and not a substring.
 */

 /**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    // Window Sliding
//     let hashMap = new Map()
//     let p1 = 0
//     let p2 = 0
//     let max = 0
    
//     while (p2 < s.length) {
//         if (!hashMap.has(s[p2])) {
//             hashMap.set(s[p2], s)
//             p2++
//             max = Math.max(max, hashMap.size)
//         } else {
//             hashMap.delete(s[p1])
//             p1++
//             max = Math.max(max, hashMap.size)
//         }
//     }
//     return max
    
    
};







