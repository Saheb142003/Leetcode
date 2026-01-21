class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
                int n=nums.size();

        vector<int>ans(n,INT_MAX);
        for(int i=0;i<n;i++){
            int x=nums[i];
            int rem=0;
            bool flag=false;
            for(int j=1;j<x;j++){
                if((j | (j+1))==x){
                    ans[i]=(j);
                    flag=true;
                    break;
                }
            }
            if(!flag)ans[i]=-1;
            
        }
        return ans;
    }
};