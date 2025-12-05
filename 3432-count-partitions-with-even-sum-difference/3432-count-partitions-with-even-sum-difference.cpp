class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for(int num : nums) {
            totalSum += num;
        }
        
        return (totalSum % 2 == 0) ? nums.size() - 1 : 0;
    }
};