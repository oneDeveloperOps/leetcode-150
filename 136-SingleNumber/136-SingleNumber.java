// Last updated: 11/4/2025, 7:50:26 AM
class Solution {
    public int singleNumber(int[] nums) {
        int ans = 0;
        for (int i : nums) {
            ans^=i;
        }
        return ans;
    }
}