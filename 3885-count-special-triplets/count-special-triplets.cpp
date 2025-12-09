class Solution {
public:
int M=1e9+7;
    int specialTriplets(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mpr;
        unordered_map<int,int>mpl;
        for(auto i:nums){
            mpr[i]++;
        }
        for(int i=0;i<n;i++){
            mpr[nums[i]]--;
           
          
                int left=mpl[nums[i]*2];
                int right=mpr[nums[i]*2];
                count=((1LL*left*right)+count)%M;
            mpl[nums[i]]++;
           

        }
        return count;
    }
};