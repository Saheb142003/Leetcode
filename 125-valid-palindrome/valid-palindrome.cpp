class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        s=ans;
        reverse(s.begin(),s.end());
        if(s == ans){
            return true;
        }else{
            return false;
        }
    }
};