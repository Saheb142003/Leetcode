class Solution {
public:
    int solve(vector<int>&nums,int k){
        unordered_map<int,int>mp;
        int n=nums.size();
        long long ans=INT_MAX,i=0,j=0,sum=0;;
        while(i<n){
            if(mp[nums[i]]==0){
                sum+=nums[i];
            }
            mp[nums[i]]++;

            while(sum>=k){
                ans=min(ans,i-j+1);
                mp[nums[j]]--;
                if(mp[nums[j]]==0){
                    sum-=nums[j];
                }
                j++;
                
            }   
            i++;
        }

        return ans==INT_MAX?-1:ans;
    }

    int minLength(vector<int>& nums, int k) {
        return solve(nums,k);
    }
};  