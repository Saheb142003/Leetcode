class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;int j=0;
        int mLen=n+1;
        int sum=0;
            int len=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len=j-i+1;
                mLen=min(len,mLen);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(mLen==n+1){
            return 0;
        }
        else{
            return mLen;
        }
    }
};