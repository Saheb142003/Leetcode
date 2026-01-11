class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n=nums.size();

        int ans=0;
        for(int i=0;i<nums.size();i++){
        unordered_map<int,int>mp;
        int count=0;
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                count+=nums[j];
                if(mp.find(count)!=mp.end()){
                    ans++;
                }
            }
        }
        return ans;
    }
};