class Solution {
    public:
    int minpairsums(vector<int>&nums){
        int ans=-1;
        int mini=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+nums[i+1]<mini){
                ans=i;
                mini=nums[i]+nums[i+1];
            }
        }
        return ans;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int ans=0;
        while(!is_sorted(nums.begin(),nums.end())){
            int index=minpairsums(nums);
            nums[index]=nums[index]+nums[index+1];
            nums.erase(nums.begin()+index+1);
            ans++;
        }
        return ans;
    }
};