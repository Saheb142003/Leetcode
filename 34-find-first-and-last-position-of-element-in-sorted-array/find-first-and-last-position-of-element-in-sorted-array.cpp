class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                int left = mid, right = mid;
                while (left > 0 && nums[left - 1] == target) {
                    left--;
                }
                while (right < nums.size() - 1 && nums[right + 1] == target) {
                    right++;
                }
                return {left, right};
            }
            if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return {-1, -1};
    }
};