/*
 * 4. Median of Two Sorted Arrays
 * There are two sorted arrays nums1 and nums2 of size m and n respectively.
 * 
 * Find the median of the two sorted arrays. The overall run time complexity
 * should be O(log (m+n)).
 * 
 * You may assume nums1 and nums2 cannot be both empty.
 *
 * Example 1:
 * nums1 = [1, 3]
 * nums2 = [2]
 * The median is 2.0
 *
 * Example 2:
 * nums1 = [1, 2]
 * nums2 = [3, 4]
 * The median is (2 + 3)/2 = 2.5
 */

/**
* @param {number[]} nums1
* @param {number[]} nums2
* @return {number}
*/

var findMedianSortedArrays = function (nums1, nums2) {
    // Sort then find median
    for (let i = 0; i < nums2.length; i++) {
        let left = 0
        let right = nums1.length - 1

        while (left <= right) {
            const mid = left + Math.ceil((right - left) / 2)
            if (nums2[i] < nums1[mid]) {
                right = mid - 1
            } else {
                left = mid + 1
            }
        }
        nums1.splice(left, 0, nums2[i])
    }
    console.log(nums1)
    if (nums1.length % 2 === 0) {
        return (nums1[(nums1.length) / 2] + nums1[(nums1.length) / 2 - 1]) / 2
    } else {
        return nums1[(nums1.length - 1) / 2]
    }
};