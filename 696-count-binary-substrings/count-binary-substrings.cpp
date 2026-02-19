class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length();
        int prev=0;int curr=1;
        int i=1;
        int ans=0;
        while(i<n){
            if(s[i]!=s[i-1]){
                ans+=min(prev,curr);
                prev=curr;
                curr=1;
            }
            else{
                curr++;
            }
            i++;
        }
        ans+=min(curr,prev);
        return ans;
    }
};