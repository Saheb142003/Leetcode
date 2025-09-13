class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[t[i]]++;
        }

        for(int i=0;i<n;i++){
            auto x=mp.find(s[i]);
            if(x!=mp.end()){
                if(x->second==1 ) mp.erase(x); 
                else x->second--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};