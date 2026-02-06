class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
           sort(nums.begin(), nums.end());
    long long n = nums.size();
    long long i = 0, j = 0, ans = 0;

    while (j < n) {
        if ((long long)nums[j] <= (long long)nums[i] * k) {
            ans = max(ans, j - i + 1);
            j++;
        } else {
            i++;
        }
    }
    return n - ans;
    }
};
//18 22 58 68