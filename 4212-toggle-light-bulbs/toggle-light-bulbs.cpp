class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        unordered_map<int,bool>mp;
        for(int i=0;i<n;i++){
            if(mp.find(bulbs[i])!=mp.end()){
                mp[bulbs[i]]=!mp[bulbs[i]];
            }
            else{
                mp[bulbs[i]]=true;
            }
        }
        vector<int>ans;
        for(auto i:mp){
            if(i.second==true)ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};