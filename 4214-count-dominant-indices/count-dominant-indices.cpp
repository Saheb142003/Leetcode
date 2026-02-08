class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        vector<int>suff(n);
        //  12 7 3
        suff[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=nums[i]+suff[i+1];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]>(suff[i]/(n-i))) ans++;
        }
        return ans;
    }
};