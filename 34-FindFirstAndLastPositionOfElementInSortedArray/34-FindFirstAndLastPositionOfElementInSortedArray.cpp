// Last updated: 11/4/2025, 7:50:42 AM
class Solution {
public:
int first(vector<int> arr, int low, int high, int x, int n) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x) 
            return mid; 
        else if (x > arr[mid]) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid - 1), x, n); 
    } 
    return -1; 
} 
  
int last(vector<int> arr, int low, int high, int x, int n) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if ((mid == n-1  || x < arr[mid + 1]) && arr[mid] == x) 
            return mid; 
        else if (x < arr[mid]) 
            return last(arr, low, (mid - 1), x, n); 
        else
            return last(arr, (mid + 1), high, x, n); 
    } 
    return -1; 
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int>ans;
    int start = 0;
    int end = nums.size()-1;
    int ans1 = first(nums,start,end , target , end+1);
    int ans2 = last(nums,start , end , target , end+1);
    ans.push_back(ans1);
    ans.push_back(ans2);
    return ans;
}
};