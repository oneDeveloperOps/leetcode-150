// Last updated: 11/4/2025, 7:49:56 AM
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0;
        vector<int> temp;
        
        for(int i = 0; i < neededTime.size() - 1; i++) {
            if (colors[i] != colors[i+1] && temp.size() > 0) {
                if(i != 0 && colors[i] == colors[i-1]) {
                    temp.push_back(neededTime[i]);
                }
                sort(temp.begin(), temp.end());
                int tempSum = sumOfArr(temp);
                res += tempSum - temp[temp.size() - 1];
                temp.clear();
            } else if(colors[i] == colors[i+1]) {
                temp.push_back(neededTime[i]);
                if(i+1 == neededTime.size() - 1) {
                    temp.push_back(neededTime[i+1]);
                    sort(temp.begin(), temp.end());
                    int tempSum = sumOfArr(temp);
                    res += tempSum - temp[temp.size() - 1];
                    temp.clear();
                }
            }
        }
        return res;
    }
    
    int sumOfArr(vector<int> v) {
       int res = 0;
        for(auto &i: v) {
            res += i;
        }
        return res;
    }
};