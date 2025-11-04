// Last updated: 11/4/2025, 7:50:21 AM
class Solution {

    public void reverse (int arr[], int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public void rotate(int[] arr, int k) {
        int n = arr.length;
        if (n == 0 || k % n == 0) return;

        k = k % n;

        reverse(arr, 0, n - k - 1);
        reverse(arr, n - k, n - 1);
        reverse(arr, 0, n - 1);
    }
}