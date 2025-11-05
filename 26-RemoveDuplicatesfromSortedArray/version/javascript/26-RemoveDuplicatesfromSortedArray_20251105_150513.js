// Last updated: 11/5/2025, 3:05:13 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(a) {
   let k = 0;
   let n = a.length;

   for (let i = 1; i < n; i++) {
    if (a[i] == a[i-1]) {
        a[i-1] = 9999;
        k++;
    }
   }
   a.sort((a, b) => a - b);
   return n - k;
};