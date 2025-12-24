class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int sum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i< nums.size();i++){
            
            if( nums[i-1] >= nums[i]){
                sum = 0;
            }
            sum += nums[i];

            maxSum = max(sum,maxSum);
        }
       return maxSum ;
    }
};