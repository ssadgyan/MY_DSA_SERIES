class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        int m = mat.size() , n = mat[0].size();
        int strow = 0, endrow = m-1, stcol = 0, endcol = n-1;
        vector<int> ans;

        while(strow <= endrow && stcol <= endcol){

            for(int j = stcol; j <= endcol; j++){//top row
                ans.push_back(mat[strow][j]);
            }
            for(int i = strow+1; i <= endrow; i++){//top+1 to bottom right 
                ans.push_back(mat[i][endcol]);
            }
            for(int j = endcol-1; j >=stcol;j--){//bottom right to bottom left
                if(strow == endrow){
                    break;
                }
                ans.push_back(mat[endrow][j]);
            }
            for(int i = endrow-1; i >= strow+1; i--){//bottom to up left

                if(stcol == endcol){
                    break;
                }
                ans.push_back(mat[i][stcol]);
            }

            strow ++;
            endrow --;
            stcol ++;
            endcol --;
        }
        return ans;
    }
};