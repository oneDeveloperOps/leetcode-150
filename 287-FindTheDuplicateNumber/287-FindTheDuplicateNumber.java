// Last updated: 11/4/2025, 7:50:13 AM
class Solution {
    public int findDuplicate(int[] nums) {
        Arrays.sort(nums);

        for (int i = 0; i < nums.length - 1; i++) {
            if ((nums[i] ^ nums[i+1]) == 0) {
                return nums[i];
            }
        }
        return -1;
    }
}