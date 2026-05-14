class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()<2) return false;
     sort(nums.begin(),nums.end());
     int n=nums.size();
     if(nums[n-1]!=nums[n-2])return false;
     int count=1;
     for(int i=0;i<=n-2;i++){
        if(nums[i]==count) count++;
        else return false;
     }
    return true;
    }
};