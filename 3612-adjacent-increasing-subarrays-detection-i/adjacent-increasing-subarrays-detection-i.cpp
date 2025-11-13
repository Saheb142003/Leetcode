class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2*k) return false;
        for(int i=0;i+2*k<=n;i++){
            int count=0;
            for(int j=i;j+k+1<n&&j<i+k-1;j++){
                if(nums[j]<nums[j+1] and nums[j+k]<nums[j+k+1]){
                    count++;
                }
                else break;
            }
            if(count>=k-1) return true;

        }
        return false;
    }
};