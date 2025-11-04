// Last updated: 11/4/2025, 7:49:59 AM
class Solution {

    public int longestCommonSubsequence(String a, String b) {
        int lenA = a.length();
        int lenB = b.length();
        int dp[][] = new int[lenA+1][lenB+1];
        for(int i = 1; i <= lenA; i++) {
            for(int j = 1; j <= lenB; j++) {
                if(a.charAt(lenA - i) == b.charAt(lenB - j)) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = Math.max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return dp[lenA][lenB];
    }
}