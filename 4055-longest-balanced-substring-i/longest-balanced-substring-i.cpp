class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int freq[26]={0};
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int target=freq[s[j]-'a'];
                int flag=true;
                for(int k=0;k<26;k++){
                    if(freq[k]!=target and freq[k]!=0){
                        flag=false;
                    }
                }
                if(flag) ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};