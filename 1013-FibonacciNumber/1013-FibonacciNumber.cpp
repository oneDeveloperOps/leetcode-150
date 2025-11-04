// Last updated: 11/4/2025, 7:50:03 AM
class Solution {
public:
    int fibMemo(int n, int *arr) {
        if(n<=1) return n;
        if(arr[n] != 0 ) return arr[n];
        arr[n] = fibMemo(n-1, arr) + fibMemo(n-2, arr);
        return arr[n];
    }
    
    int fib(int n) {
        int arr[n+1];
        for(int i = 0; i <=n; i++) {
            arr[i] = 0;
        }
        return fibMemo(n, arr);
    }
};