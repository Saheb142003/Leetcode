class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto i:nums){
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        return 1LL * abs(maxi-mini)*k;
    }
};