class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // Count frequencies
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        // Find max frequency
        int maxFreq = 0;
        for (auto& [num, count] : freq) {
            maxFreq = max(maxFreq, count);
        }
        
        // Count total elements with max frequency
        int result = 0;
        for (auto& [num, count] : freq) {
            if (count == maxFreq) {
                result += count;
            }
        }
        
        return result;
    }
};