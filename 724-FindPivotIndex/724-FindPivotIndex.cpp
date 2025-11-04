// Last updated: 11/4/2025, 7:50:04 AM
class Solution {
public:
   
    int pivotIndex(vector<int>& nums) {
               int ls = 0;
                int rs = 0;
                int totals = 0;
                for(int i = 0 ; i< nums.size() ; i++){
                    totals += nums[i];
                }
                rs = totals;

            for(int i = 0 ;i < nums.size(); i++){
               rs -= nums[i];
               if(rs == ls){
                   return i;
               }
                else{
                    ls += nums[i];
                }
            }
            return -1;
    }
};