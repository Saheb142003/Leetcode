class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<int>ans;
        for(auto i:nums){
            if(mp[i]>1){
                ans.push_back(i);
                mp[i]--;
            }
        }        
        return ans;
    }
};