class Solution {
    bool checkP(int n){
        bool ans=true;
        for(long long  i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return ans;
    }
public:
    int largestPrime(int n) {
        vector<int>primes(n+1,1);
        primes[0]=primes[1]=0;
        for(int i=2;i*i<=n;i++){
            if(primes[i]){
                for(int j=i*i;j<=n;j+=i){
                    primes[j]=0;
                }
            }
        }

        vector<int>prime;
        for (int i = 2; i <= n; i++) {
            if (primes[i]) prime.push_back(i);
        }
        long long sum = 0, lastPrime = 0;
        for (int p : prime) {
            sum += p;
            if (sum > n) break;
            if (checkP(sum)) lastPrime = sum;
        }

        return lastPrime;
    }
};