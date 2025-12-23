class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i)) {
                result.push_back(i);
            }
        }
        
        return result;
    }
    
private:
    bool isSelfDividing(int num) {
        int temp = num;
        
        while (temp > 0) {
            int digit = temp % 10;
            
            // If digit is 0, it's not self-dividing
            if (digit == 0) {
                return false;
            }
            
            // Check if num is divisible by the digit
            if (num % digit != 0) {
                return false;
            }
            
            temp /= 10;
        }
        
        return true;
    }
};