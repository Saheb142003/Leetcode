class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        vector<int>temp=nums;
        int count=0, n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==-1){
                nums[i]*=-1;
                nums[i+1]*=-1;
                count++;
            }
            if(count>k) break;
        }
        if(count<=k and nums[n-1]==1 ) return true;
        nums=temp;
        count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==1){
                nums[i]*=-1;
                nums[i+1]*=-1;
                count++;
            }
            if(count>k) break;
        }
        if(nums[n-1]==1) return false;
        return count<=k;
    }
};