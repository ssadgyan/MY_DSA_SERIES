class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int, int> freq;

        for(int val : arr){
            freq[val]++;
        }

        int maxkey = -1;

        for (auto &p : freq) {
          if (p.second == p.first) {
            maxkey = max(maxkey,p.second);
          }
        }
        return maxkey;
        
    }
};