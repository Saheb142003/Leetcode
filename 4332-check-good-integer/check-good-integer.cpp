class Solution {
public:
    bool checkGoodInteger(int n) {
        string s=to_string(n);
        int i=0;
        int ds=0;
        int ss=0;
        while(i<s.size()){
            ds+=((s[i])-'0');
            ss+=((s[i]-'0')*(s[i]-'0'));
            i++;
        }
        return (ss-ds)>=50;
    }
};