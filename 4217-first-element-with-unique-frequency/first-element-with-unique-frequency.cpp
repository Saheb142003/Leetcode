class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        map<int,int>u;
        for(auto i:mp){
            u[i.second]++;
        }
        
        for(auto x:nums){
            if(u[mp[x]]==true){
                return x;
            }
        }
        return -1;
    }
};