// Last updated: 11/4/2025, 7:50:19 AM
class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int n = nums[i];
            if(map.containsKey(n) && Math.abs(i-map.get(n)) <= k) {
                return true;
            }
            map.put(nums[i], i);
        }
        return false;
    }
}