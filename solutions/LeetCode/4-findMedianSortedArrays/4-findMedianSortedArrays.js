/**
* @param {number[]} nums1
* @param {number[]} nums2
* @return {number}
*/

var findMedianSortedArrays = function (nums1, nums2) {
    // Sort then find median - O(n)
    for (let i=0; i<nums2.length; i++) {
        let left = 0
        let right = nums1.length-1
        
        while (left <= right) {
            const mid = left + Math.ceil((right - left) / 2)
            if (nums2[i] < nums1[mid]) {
                right = mid-1
            } else {
                left = mid+1
            }
        }
        nums1.splice(left, 0, nums2[i])
    }
    console.log(nums1)
    if (nums1.length % 2 === 0) {
        return (nums1[(nums1.length)/2] + nums1[(nums1.length)/2-1])/2
    } else {
        return nums1[(nums1.length-1)/2]
    }

    // O(log(n+m))
};