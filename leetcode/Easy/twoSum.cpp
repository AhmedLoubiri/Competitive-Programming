// leetcode.com/problems/two-sum/

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        l = []
        i = 0
        j = 1
        while i < len(nums):
            while j < len(nums) and nums[i]+nums[j] != target:
                j += 1
            if j < len(nums) and nums[i]+nums[j] == target:
                l.append(i)
                l.append(j)
            i += 1
            j = i + 1
        return l