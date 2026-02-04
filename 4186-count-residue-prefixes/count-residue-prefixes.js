/**
 * @param {string} s
 * @return {number}
 */
var residuePrefixes = function(nums) {
     const s=new Set();
     var count=0;
     for(var i=0;i<nums.length;i++){
        s.add(nums[i]);
        if((i+1)%3== s.size) count++;
     }   
    return count;
};