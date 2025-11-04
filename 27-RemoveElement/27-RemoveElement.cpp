// Last updated: 11/4/2025, 7:50:43 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
