#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class solution{

    public:

    int maxsumarray(vector<int>& nums){
        
        int currSum=0 , maxSum= INT_MIN;

        for (int val : nums){
            currSum += val;
            maxSum = max(currSum , maxSum);

            if(currSum < 0){
                currSum= 0;
            }
        }
        return maxSum;
    }
};

int main(){

    solution obj;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "The maximum subarray sum is: " << obj.maxsumarray(nums) << endl; // Output: 6
    return 0;
}