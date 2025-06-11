class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        int maxv=INT_MIN;
        int minv=INT_MAX;

        for(auto i: s){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second%2==0){
                minv=min(minv,i.second);
            }
            else{
                maxv=max(maxv,i.second);
            }
        }

        return maxv-minv;
    }
};