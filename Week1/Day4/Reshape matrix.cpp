class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int row=mat.size(),col=mat[0].size();
       int a=0,b=0;
        vector<vector<int>>ans(r, vector<int>(c));
       if((r*c)!=(row*col))
         return mat;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                  ans[a][b]=mat[i][j];
                  if(b<c-1)
                   b++;
                  else if(a<r&&b==c-1)
                   {
                      a++;  b=0;
                   }  
                   else
                    break;  
            }
        }
         return ans;        
    }
};
