class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int i=0;int j=0;
        int top=0,down=n-1,left=0,right=n-1;
        int dir=0;
        int size=1;
        while(size<=n*n){
            if(dir==0){
                ans[top][j]=size;
                j++;
                if(j>right){
                    top++;
                    dir=1;
                    i=top;
                    j=right;
                }
            }
            else if(dir==1){
                ans[i][right]=size;
                i++;
                if(i>down){
                    dir=2;
                    right--;
                    i=down;
                    j=right;
                }
            }
            else if(dir==2){
                ans[down][j]=size;
                j--;
                if(j<left){
                    dir=3;
                    j=left;
                    down--;
                    i=down;
                }
            }
            else if(dir==3){
                ans[i][left]=size;
                i--;
                if(i<top){
                    dir=0;
                    i=top;
                    left++;
                    j=left;
                }
            }


            size++;
        }
        return ans;
    }
};