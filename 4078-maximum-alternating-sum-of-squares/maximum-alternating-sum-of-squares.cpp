class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int j=0;
        for(auto i:nums){
            int val=i*i;
            nums[j]=val;
            j++;
        }
        j=nums.size()-1;
        sort(nums.begin(),nums.end());
        int i=0;
        long long res=0;
        while(i<j){
            
            res+=nums[j];
            j--;
            res-=nums[i];
            i++;
        }
        if(i==j) res+=nums[j];
        return res;
    }
};