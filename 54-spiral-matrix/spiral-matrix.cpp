class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;int j=0;
        int top=0,down=n-1,left=0,right=m-1;
        int dir=0;
        int size=n*m;
        vector<int>ans;
        while(ans.size()<size){
            if(dir==0){
                ans.push_back(matrix[top][j]);
                j++;
                if(j>right){
                    top++;
                    dir=1;
                    i=top;
                    j=right;
                }
            }
            else if(dir==1){
                ans.push_back(matrix[i][right]);
                i++;
                if(i>down){
                    dir=2;
                    right--;
                    i=down;
                    j=right;
                }
            }
            else if(dir==2){
                ans.push_back(matrix[down][j]);
                j--;
                if(j<left){
                    dir=3;
                    j=left;
                    down--;
                    i=down;

                }
            }
            else if(dir==3){
                ans.push_back(matrix[i][left]);
                i--;
                if(i<top){
                    dir=0;
                    i=top;
                    left++;
                    j=left;
                }
            }
        }
        return ans;
    }
};