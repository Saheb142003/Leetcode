class Solution {
public:
    int maxBalancedShipments(vector<int>& nums) {
        int i=0;int n=nums.size();
        int maxi=INT_MIN;
        int count=0;
        for(i=0;i<n;i++){
            maxi=max(nums[i],maxi);
            if(nums[i]<maxi){
                count++;
                maxi =INT_MIN;
            }
        }
        return count;

    }
};