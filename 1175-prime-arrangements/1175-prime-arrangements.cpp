class Solution {
public:
    static const int MOD = 1e9 + 7;

    int numPrimeArrangements(int n) {
        // Step 1: Count primes using sieve
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }

        int primes = 0;
        for (int i = 2; i <= n; i++)
            if (isPrime[i]) primes++;

        int nonPrimes = n - primes;

        // Step 2: Compute factorials
        long long res = 1;
        for (int i = 1; i <= primes; i++)
            res = (res * i) % MOD;

        for (int i = 1; i <= nonPrimes; i++)
            res = (res * i) % MOD;

        return res;
    }
};
