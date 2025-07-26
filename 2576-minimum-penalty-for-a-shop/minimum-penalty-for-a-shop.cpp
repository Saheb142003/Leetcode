class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> nos(n + 1, 0);  // Penalty from 'N' before or at i
        vector<int> yes(n + 1, 0);  // Penalty from 'Y' after i

        // Fill 'nos' from left to right
        for (int i = 0; i < n; i++) {
            nos[i + 1] = nos[i] + (customers[i] == 'N' ? 1 : 0);
        }

        // Fill 'yes' from right to left
        for (int i = n - 1; i >= 0; i--) {
            yes[i] = yes[i + 1] + (customers[i] == 'Y' ? 1 : 0);
        }

        // Find the hour with minimum penalty
        int minPenalty = INT_MAX, idx = 0;
        for (int i = 0; i <= n; i++) {
            int totalPenalty = nos[i] + yes[i];
            if (totalPenalty < minPenalty) {
                minPenalty = totalPenalty;
                idx = i;
            }
        }

        return idx;
    }
};
