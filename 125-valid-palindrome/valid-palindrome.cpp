class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        s=ans;
        reverse(s.begin(),s.end());
        return ans==s;
    }
};