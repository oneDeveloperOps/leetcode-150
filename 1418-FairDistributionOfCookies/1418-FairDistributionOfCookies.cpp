// Last updated: 11/4/2025, 7:49:58 AM
class Solution {
public:
    int result = INT_MAX;
    int n;

    void solve(int index, vector<int> &childrens, vector<int> &cookies, int k) {
        if (index >= n) {
            // return min unfairness
            int max_unfairness = *max_element(begin(childrens), end(childrens));
            result = min(result, max_unfairness);
            return;
        }

        //backtrack all possible solutions
        for (int i = 0; i < k; i++) {
            childrens[i] += cookies[index];
            solve(index + 1, childrens, cookies, k);
            childrens[i] -= cookies[index];
        }
    }

    int distributeCookies(vector<int>& cookies, int k) {
         n = cookies.size();
         vector<int> childrens(k, 0);
        solve(0, childrens, cookies, k);
        return result;
    }
};