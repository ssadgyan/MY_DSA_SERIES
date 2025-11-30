class Solution {
public:

    void getallSubset(vector<int>& nums, vector<int>& ans,int i, vector<vector<int>>& allSubsets){

        if(i == nums.size()){
            allSubsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getallSubset(nums, ans, i+1, allSubsets);
        
        //backtrack
        ans.pop_back();
        //exclude
        getallSubset(nums, ans, i+1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allSubsets;

        getallSubset(nums, ans, 0, allSubsets);

        return allSubsets;
    }
};