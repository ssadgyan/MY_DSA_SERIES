class Solution {
public:

 bool SearchInRow(vector<vector<int>>& mat, int target, int row){
         int n = mat[0].size();
         int st = 0, end = n-1;

         while(st <= end){

              int mid = st +(end-st)/2;
            
             if(target == mat[row][mid]){
                  return true;
              }
             else if(target > mat[row][mid]){
                 st = mid+1;
             }
            else{
                  end = mid-1;
             }
         }
          return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m = mat.size(), n = mat[0].size();
        int StartRow = 0, EndRow = m-1;

        while(StartRow <= EndRow){

            int MidRow = StartRow +(EndRow - StartRow)/2;

            if(target >=mat[MidRow][0] && target <= mat[MidRow][n-1]){

                return SearchInRow(mat, target, MidRow);
            }
            else if(target >= mat[MidRow][n-1]){
                //Down => right
                StartRow = MidRow +1;
            }
            else{
                //Up => left
                EndRow = MidRow -1;
            }
        }
        return false;
        
    }
};