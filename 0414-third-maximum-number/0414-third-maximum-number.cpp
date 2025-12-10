class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int count = 1;             
        int prev = nums[0];        // store the 1st maximum

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != prev) {   // new distinct number found
                count++;
                prev = nums[i];

                if (count == 3) return nums[i];  // 3rd max found
            }
        }

        return nums[0];  // if 3rd max not found, return maximum
    }
};
