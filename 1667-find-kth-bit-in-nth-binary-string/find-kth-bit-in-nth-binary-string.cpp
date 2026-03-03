class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        for(int a=2;a<=n;a++){
            string temp=s;
            reverse(s.begin(),s.end());
            for(int i=0;i<s.size();i++){
                s[i]=(s[i]=='0'?'1':'0');
            }
           s=temp+"1"+s;
        }
        return s[k-1];
    }
};