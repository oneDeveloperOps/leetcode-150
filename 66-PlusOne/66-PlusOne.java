// Last updated: 11/4/2025, 7:50:39 AM
class Solution {
    public int[] plusOne(int[] digits) {
       for (int i = digits.length - 1; i >= 0; i--) {
           if (digits[i] < 9) {
               digits[i]++;
               return digits;
           } else {
               digits[i] = 0;
           }
       }
        int ans[] = new int[digits.length+1];
        ans[0] = 1;
        for (int i = 1; i < digits.length; i++ ) {
            ans[i] = digits[i];
        }
        return ans;
    }
}
