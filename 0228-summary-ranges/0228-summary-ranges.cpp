class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        if (nums.empty()) return result;
        
        int start = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // Check if we're at the end or if the next number breaks the sequence
            if (i == nums.size() - 1 || nums[i] + 1 != nums[i + 1]) {
                // Add the range to result
                if (start == i) {
                    // Single element range
                    result.push_back(to_string(nums[start]));
                } else {
                    // Multi-element range
                    result.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
                }
                // Move start to next potential range
                start = i + 1;
            }
        }
        
        return result;
    }
};