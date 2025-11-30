class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            string s=to_string(i);
            int n=s.size();
            for(int j=1;j<n-1;j++){
                bool peak=s[j]>s[j-1] && s[j]>s[j+1];
                bool valley=s[j]<s[j-1] && s[j]<s[j+1];
                if(peak || valley) ans++;
            }

        }    
        return ans;
    }
};