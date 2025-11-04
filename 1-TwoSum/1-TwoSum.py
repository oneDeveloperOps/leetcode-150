# Last updated: 11/4/2025, 7:50:54 AM
class Solution(object):
    def twoSum(self, nums, target):
        d = dict()
        for i in range(len(nums)):
            if (target - nums[i]) in d:
                return [i, d[target-nums[i]]] 
            if nums[i] not in d:
                d[nums[i]] = i
            
        
        