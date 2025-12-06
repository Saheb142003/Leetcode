class Solution {
public:
    char kthCharacter(int k) {

        string ans="a";
        while(ans.size()<k+1){
            int n=ans.size();
            for(int i=0;i<n;i++){
                char ch=ans[i]=='z'?'a':ans[i]+1;
                ans.push_back(ch);
            }
        }
        return ans[k-1];
    }
};