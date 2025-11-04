# Last updated: 11/4/2025, 7:49:53 AM
class Solution(object):
    def arraySign(self, nums):
        m = 1
        for i in range (0, len(nums)):
            m = m * nums[i]
        """
        :type nums: List[int]
        :rtype: int
        """
        if m > 0:
            return 1
        if m < 0:
            return -1
        return 0