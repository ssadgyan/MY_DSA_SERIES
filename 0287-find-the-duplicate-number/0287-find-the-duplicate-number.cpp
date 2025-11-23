class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0], fast = nums[0];

        do{
            slow = nums[slow]; //+1
            fast = nums[nums[fast]]; //+2

        }while(slow != fast);

        slow = nums[0];
        while(slow != fast){ //do +1 in fast and slow pointer
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
        
    }
};