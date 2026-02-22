class Solution {
public:
    int binaryGap(int n) {
        bitset<32>binaryRep(n);
        string s=binaryRep.to_string();
        int i=0;
        int l=s.length();
        int ans=0;
        while(i<l and s[i]!='1')i++;
        int j=i+1;
        while(j<l){
            if(s[j]=='1'){
                ans=max(ans,j-i);
                i=j;
            }
            j++;
        }
        return ans;
    }
};