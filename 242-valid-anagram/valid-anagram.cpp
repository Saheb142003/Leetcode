class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        vector<int>count(26,0);
        for(int c:s) count[c-'a']++;
        for(int c:t) count[c-'a']--;
        for(int x:count) if(x!=0) return false;
        return true;
    }
};