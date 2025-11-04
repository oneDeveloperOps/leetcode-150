// Last updated: 11/4/2025, 7:50:01 AM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    nums = nums.map(m => {
        return Math.abs(m) * Math.abs(m); 
    })
    .sort((a,b) => a-b);
    return nums;
};