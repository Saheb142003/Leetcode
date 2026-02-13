class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int freq[26]={0};
            int high=0;
            int low=0;
            int dist=0;
            for(int j=i;j<n;j++){
                char c=s[j]-'a';
                if(freq[c]==0) dist++;
                freq[c]++;
                high=max(high,freq[c]);
                low=max(low,freq[c]);
                int len=j-i+1;
                if(high == low and len==dist*high) ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};