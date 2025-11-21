class Solution {
public:
    bool isUgly(int n) {
        // Negative numbers and 0 are not ugly
        if (n <= 0) return false;
        
        // 1 is considered ugly (no prime factors)
        if (n == 1) return true;
        
        // Divide by 2, 3, and 5 as many times as possible
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;
        
        // If n is 1, it only had factors of 2, 3, 5
        return n == 1;
    }
};