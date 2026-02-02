/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    var maxsum=Number.MIN_SAFE_INTEGER;
    var csum=0;
    var i=0;
    while(i<nums.length){
        csum+=nums[i];
        maxsum=Math.max(maxsum,csum);
        if(csum<=0){
            csum=0;
        }
        i++;
    }
    return maxsum;
};