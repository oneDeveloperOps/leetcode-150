// Last updated: 11/4/2025, 7:50:37 AM
class Solution {
public:
    int climbStairs(int n) {
        int one=1,two=1;
        for(int i = 0; i < n-1; i++) {
            int temp = one;
            one = one+two;
            two = temp;
        }
        return one;
    }
};