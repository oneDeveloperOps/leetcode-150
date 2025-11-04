// Last updated: 11/4/2025, 7:50:08 AM
class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        int[] leftSums = new int[nums.length];
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            leftSums[i] = sum;
        }
        Map<Integer, Integer> modsToIndices = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int mod = leftSums[i] % k;
            if (mod == 0 && i != 0) {
                return true;
            }
            if (!modsToIndices.containsKey(mod)) {
                modsToIndices.put(mod, i);
            } else {
                int prev = modsToIndices.get(mod);
                if (prev < i - 1) {
                    return true;
                }
            }
        }
        return false;
    }
}