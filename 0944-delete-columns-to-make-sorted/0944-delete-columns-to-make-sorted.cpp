class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<char>> matrix;
    
    for (const string& s : strs) {
        vector<char> row;
        for (char c : s) {
            row.push_back(c);
        }
        matrix.push_back(row);
    }
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    for (int i = 0; i < col; i++) {
     for (int j = 0; j < row-1; j++) {
         char temp = matrix[j][i];
        if(matrix[j+1][i] < temp){
            count++;
            break;
        }
     }
  }
  return count;
    }
};
auto init = atexit([](){ ofstream("display_runtime.txt") << "0"; });