class Solution {
public:
    long long countPairs(vector<string>& words) {
        map<vector<int>,int>mp;
        long long ans=0;
        for(auto s:words){
            int m=s.length();
            vector<int>diff;
            for(int j=1;j<m;j++){
                int d=s[j]-s[j-1];
                if(d>=0) d%=26;
                else d+=26;
                diff.push_back(d);
            }
            ans+=mp[diff];
            mp[diff]++;
        }
        return ans;
    }
};