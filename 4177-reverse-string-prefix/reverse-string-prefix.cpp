class Solution {
public:
    string reversePrefix(string s, int k) {
        int n=s.size();
        if(k>n){
            k%=n;
        }
        int i=0;
        while(i<=k-1){
            swap(s[i],s[k-1]);
            i++;
            k--;
        }
        return s;
    }
};