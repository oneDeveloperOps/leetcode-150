// Last updated: 11/4/2025, 7:50:47 AM
class Solution {
public:
    bool isPalindrome(int x) {
        int t = x;
        if (x < 0) {
            return false;
        }
        
        long long rev = 0;
        while (x > 0) {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        return rev == t;
    }
};