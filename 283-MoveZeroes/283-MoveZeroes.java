// Last updated: 11/4/2025, 7:50:17 AM
class Solution {

    public void swap(int []arr, int s, int e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
    }

    public void moveZeroes(int[] nums) {
        int j = -1;

        if (nums.length == 1) {
            return;
        }

        //look for first 0
        for (int u = 0; u < nums.length - 1; u++) {
            if (nums[u] == 0) {
                j = u;
                break;
            }
        }

        for (int i = j+1; i < nums.length; i++) {
            try {
                if (nums[i] != 0) {
                swap(nums, i, j);
                j++;
                }
            } catch (Exception ex) {

            }
        }

    }
}