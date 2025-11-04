// Last updated: 11/4/2025, 7:50:53 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);
        //O(n^2)
        // for(int i=0; i<nums.size(); i++) {
        //     for(int j = i+1; j<nums.size(); j++) {
        //         if(nums[i] + nums[j] == target) {
        //             arr[0] = i;
        //             arr[1] = j;
        //         }
        //     }
        // }
        // return arr;
        
        //O(n) algo
        map<int , int> MyMap;
        for(int i=0; i<nums.size(); i++) 
            MyMap[nums[i]] = i;
        
        for(int i =0 ; i<nums.size(); i++) {
            int comp = target - nums[i];
            if(MyMap[comp] && MyMap[comp] != i) {
                arr[0] = i;
                arr[1] = MyMap[comp];
            }
            
        } 
        return arr; 
    }
};