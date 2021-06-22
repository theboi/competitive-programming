class Solution:
    '''Slower, Smaller'''
    def twoSumHash(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for index, num in enumerate(nums):
            com = target - num
            if com in dic:
                return [index, dic[com]]
            dic[num] = index

    '''Faster, Larger'''
    def twoSumDoublePointer(self, nums: List[int], target: int) -> List[int]:
        nums = enumerate(nums)
        nums = sorted(nums, key=lambda x:x[1])
        l, r = 0, len(nums)-1
        while l < r:
            if nums[l][1]+nums[r][1] == target:
                return sorted([nums[l][0], nums[r][0]])
            elif nums[l][1]+nums[r][1] < target:
                l += 1
            else:
                r -= 1