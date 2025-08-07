class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if(k<=1) return 0;
     vector<vector<int>>ans;

     int n=nums.size();
     int j=0;int i=0;
    int count=0;
    int prod=1;
    while(j<n){
        prod*=nums[j];
        while(prod>=k and i<=j){
            prod/=nums[i];
            i++;
        }
        if(prod<k){


        count += (j - i + 1);
        j++;
        }
    }
        return count;
    }
};