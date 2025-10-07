class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        
        sort(indexedNums.begin(), indexedNums.end());

        int i = 0, j = indexedNums.size() - 1;

        while (i < j) {
            int sum = indexedNums[i].first + indexedNums[j].first;

            if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else {
                return {indexedNums[i].second, indexedNums[j].second};
            }
        }

        return -1;
    }
};


#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<int> nums;
   int target;
   int x;

   cout<<"enter number of elements you want in list  :-  "<<endl;
   cin>>x;

   nums.resize(x);
   cout<<"Enter a elements you want  :-  "<<endl;
   for(int i = 0; i < x; ++i){
    cin >> nums[i];
}
   cout<<"enter a target  :-  "<<endl;
   cin>>target;

   Solution sol;
    vector<int> result =  sol.twoSum(nums,target);
    cout << "Indices: ";
     if(result != -1){
    for (int idx : result) {
        cout << idx << " ";
      }
    }

    cout << endl;
 
    return 0;
}