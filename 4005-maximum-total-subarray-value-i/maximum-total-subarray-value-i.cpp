class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        auto  mini=min_element(nums.begin(),nums.end());
        auto  maxi=max_element(nums.begin(),nums.end());
        return 1LL * abs(*maxi-*mini)*k;
    }
};