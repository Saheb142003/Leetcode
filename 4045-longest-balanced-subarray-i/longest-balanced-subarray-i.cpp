class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
       for(int i=0;i<n;i++){
        unordered_map<int,int>mp;
        int odd=0,even=0;
        for(int j=i;j<n;j++){
            int x=nums[j];
            if(x%2==0 and mp[x]==0){
                mp[x]++;
                even++;
            }
            if(x%2!=0 and mp[x]==0){
                mp[x]++;
                odd++;
            }
            if(odd==even){
                ans=max(ans,j-i+1);
            }
        }
       }
        return ans;
    }
};