class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;
        int n = arr2.size();
        for (auto i : arr1) {
            while (i > 0 and !st.count(i)) {
                st.insert(i);
                i /= 10;
            }
        }
        int ans = 0;
        for (auto i : arr2) {
            while (i > 0 and !st.count(i)) {
                i /= 10;
            }
            if (i > 0) {
                ans = max(ans, (int)(log10(i) + 1));
            }
        }
        return ans;
    }
};