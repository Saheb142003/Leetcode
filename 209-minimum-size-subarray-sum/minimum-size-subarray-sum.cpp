class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int n=nums.size();
     vector<int>arr(n+1,0);
     int sum=0;
     arr[0]=0;
     for(int i=1;i<=n;i++){
        sum+=nums[i-1];
        arr[i]=sum;
     }
     int i=0;int j=1;
     int ans=INT_MAX;

     if(arr[n] < target) return 0;

     while(j<n+1){
        if(arr[j]-arr[i]>=target){
            ans=min(ans,j-i);
            i++;
        }
        else{
            j++;
        }
     }
     return ans;
    }
};