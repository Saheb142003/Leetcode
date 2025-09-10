class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        int n=s.length();

        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        string oppo=ans;
        reverse(oppo.begin(),oppo.end());
        return ans==oppo;
    }
};