# Last updated: 11/4/2025, 7:49:51 AM
class Solution:
    def kthLargestNumber(self, nums: List[str], k: int) -> str:
        diff = []
        for i in range(0, len(nums)):
            diff.append(int(nums[i]))
        diff.sort()
        return str(diff[len(nums) - k])
            
        