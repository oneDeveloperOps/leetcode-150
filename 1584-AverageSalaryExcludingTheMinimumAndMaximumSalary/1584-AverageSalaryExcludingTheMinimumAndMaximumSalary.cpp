// Last updated: 11/4/2025, 7:49:57 AM
class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        sort(salary.begin(), salary.end());
        for (int i = 0; i < salary.size(); i++) {
            sum += salary[i];
        }
        return (sum - (salary[salary.size() - 1] + salary[0])) / (salary.size() - 2);
    }
};