// Last updated: 11/4/2025, 7:49:54 AM
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a = 0;
        int b = 0;
        string f = "";
        for (auto c : s) {
            if (c == '0') {
                a++;
            } else {
                b++;
            }
        }

        if (b > 0) {
            for (int i = 0; i < b-1; i++) {
                f += "1";
            }
        }

        if (a > 0) {
            for (int i = 0; i < a; i++) {
                f += "0";
            }
        }

        if (b > 0) {
            f+= "1";
        }

        return f;

    }
};