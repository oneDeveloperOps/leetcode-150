// Last updated: 11/5/2025, 3:34:54 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(a) {
    let count = 1;
    let n = a.length;
    if (n == 1) return a[0];
    a.sort((a,b) => a-b);
    for (let i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            count++;
            if (count > n/2) {
                return a[i];
            }
        } else {
            count = 1;
        }
    }
    return -1;
};