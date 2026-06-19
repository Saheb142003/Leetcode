class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool neg = (dividend < 0) ^ (divisor < 0);

        long long x = llabs((long long)dividend);
        long long y = llabs((long long)divisor);

        long long ans = 0;

        while (x >= y) {

            long long temp = y;
            long long cnt = 1;

            while (x >= temp + temp) {
                temp += temp;      // double it
                cnt += cnt;        // double count
            }

            x -= temp;
            ans += cnt;
        }

        return neg ? -ans : ans;
    }
};