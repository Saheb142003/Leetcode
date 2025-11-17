class Solution {
public:
    const int M=1e9+7;
    int numSub(string s) {
        int i=0;
        int count=0;
        int ans=0;
        while(i<s.length()){
            if(s[i]=='1'){
                count++;
                ans=(ans+count)%M;
            }
            else{
                count=0;
            }
            i++;
        }
        return ans;
    }
};