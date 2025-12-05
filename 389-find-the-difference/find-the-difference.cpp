class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        char ans;
        for(auto c:t){
            if(mp.find(c)==mp.end()){
                ans=c;
            }
            else{
                mp[c]--;
                if(mp[c]==0) mp.erase(c);
            }
        }
        return ans;
    }
};