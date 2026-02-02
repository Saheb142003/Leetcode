class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int csum=0;
        int i=0;
        while(i<nums.size()){
            
            csum+=nums[i];
            maxsum=max(csum,maxsum);
            if(csum<=0){
                csum=0;
            }
            i++;
        }
        return maxsum;
    }
};