// Last updated: 11/4/2025, 7:50:41 AM
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> data;

        int i = 0;
        for (i = 0; i < intervals.size(); i++) {
            if (newInterval[0] > intervals[i][1]) {
                data.push_back(intervals[i]);
            } else if (newInterval[1] < intervals[i][0]) {
                break;
            } else {
                //overlapping
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
            }
        }

        data.push_back(newInterval);

        for (int j = i ; j < intervals.size(); j++) {
            data.push_back(intervals[j]);
        }

        return data;
    }
};