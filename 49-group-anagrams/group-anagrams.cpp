class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string a=strs[i];
            string x=a;
            sort(x.begin(),x.end());
            mp[x].push_back(a);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};