class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long n=nums.size();
        long long i=0;
        long long j=0;
        long long count=0;
        long long ans=0;
        // 2
        // 1 2 3 4 6 8 10 15 16 20 
        // 1 2 6 4
        while(j<n){
            
            while((long long)nums[j]>(long long)nums[i]*k ){
               i++;
            }
            ans=max(ans,j-i+1);
           j++;
        }
        return (int)(n-ans);
    }
};
//18 22 58 68