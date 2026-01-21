/**
 * @param {number[]} nums
 * @return {number[]}
 */
var minBitwiseArray = function(nums) {
    let n=nums.length;
    let ans=[];
    for(let i=0;i<n;i++){
        let flag=false;
        let x=nums[i];
        for(let j=0;j<x;j++){
            if((j | (j+1))==x){
                flag=true;
                ans.push(j);
                break;
            }
        }
        if(!flag)ans.push(-1);
    }
    return ans;
};