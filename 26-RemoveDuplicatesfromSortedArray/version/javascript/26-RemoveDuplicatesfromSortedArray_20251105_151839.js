// Last updated: 11/5/2025, 3:18:39 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(a) {

    let track = 0;
    let b = 0;
    let n = a.length;

    for (let i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            if (track == 0) {
                track = 1;
                continue;
            }
            b++;
            a[i-1] = Number.MAX_SAFE_INTEGER;
        } else {
            track = 0;
        }
    }
    a.sort((c,d) => c-d);
    return n - b; 
};