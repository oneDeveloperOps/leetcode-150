// Last updated: 11/4/2025, 7:50:00 AM
class Solution {
public:
    int tri(int n, int *arr) {
        if(n <=1) return n;
        if(n == 2) return 1;
        if(arr[n] != 0) return arr[n];
        arr[n] = tri(n-1, arr) + tri(n-2, arr) + tri(n-3, arr);
        return arr[n];
    }
    
    int tribonacci(int n) {
        int arr[n+1];
        for(int i = 0; i <= n; i++) {
            arr[i] = 0;
        }
        return tri(n , arr);
    }
};