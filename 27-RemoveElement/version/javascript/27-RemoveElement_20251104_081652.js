// Last updated: 11/4/2025, 8:16:52 AM
/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {

    let l = nums.length;
    let sub = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] == val) {
            nums[i] = -1;
            sub++;
        }
    }
    nums.sort((a, b) => b - a);
    return l - sub;
};