// Last updated: 11/4/2025, 7:50:51 AM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
           vector<int> temp;
        int i = 0;
        int j = 0;

        while(i < a.size() && j < b.size()) {
            if(a.at(i) <= b.at(j)) {
                temp.push_back(a.at(i));
                i++;
            }else {
                temp.push_back(b.at(j));
                j++;
            }
        }

          while(i < a.size()) {
           temp.push_back(a.at(i));
            i++;
        }

        while(j < b.size()) {
            temp.push_back(b.at(j));
            j++;
        }
        
        if(temp.size() % 2 == 0) {
           double ans = ((temp.at((temp.size()/2)) + temp.at((temp.size()/2) - 1))/2.0);
           return ans;
        }else {
            return  (double)(temp.at((temp.size()/2)));
        }
    }
    
};