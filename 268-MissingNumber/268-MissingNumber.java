// Last updated: 11/4/2025, 7:50:14 AM
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int requiredSum = (n * (n+1)) /2;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        return requiredSum - sum;
    }
}