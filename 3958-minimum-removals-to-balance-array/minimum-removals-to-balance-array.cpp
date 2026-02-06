class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=0;
        int ans=0;
        // 2
        // 1 2 3 4 6 8 10 15 16 20 
        // 1 2 6 4
        while(j<n){
            if(((long long) nums[i]*k) >=(long long) nums[j] ){
                ans=max(ans,j-i+1);
                j++;
            }
            else{
                i++;
            }
        }
        return n-ans;
    }
};
//18 22 58 68