// Last updated: 11/4/2025, 7:50:07 AM
class Solution {
    public int[] findErrorNums(int[] nums) {

        int duplicate = 0;
        int miss =0;
        Set<Integer> s = new HashSet<>();
        for(int i = 0; i < nums.length; i++) {
            if(s.contains(nums[i])) {
              duplicate = nums[i];
            }
              s.add(nums[i]);
        }
      
        for(int i = 1; i <= nums.length; i++) {
            if(!s.contains(i)) {
                miss = i;
                break;
            }
        }
        return new int[]{duplicate, miss};
        
    } 
}