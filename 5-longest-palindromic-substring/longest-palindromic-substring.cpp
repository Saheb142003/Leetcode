class Solution {
public:
    string check(string& s, int x, int y) {
        int n=x,m=y;
        while (x <= y) {
            if (s[x] == s[y]) {
                x++, y--;
            } else {
                return "";
            }
        }
        return s.substr(n, m-n+1);
    }
    string longestPalindrome(string s) {

        int n = s.size();
        int size = 0;
        string res = "";
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n) {
                if (s[i] == s[j]) {
                    string ans = check(s, i, j);
                    if (ans.size() > size) {
                        res = ans;
                        size = ans.size();
                    }
                }
                j++;
            }
        }
        return res;
    }
};