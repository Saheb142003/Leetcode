class Solution {
public:

    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    bool flag=true;;
                    for(int x=0;x<n;x++){
                        if(x!=j and mat[i][x]==1 ){
                            flag=false;
                            break;
                        }
                    }
                    for(int y=0;y<m;y++){
                        if(y!=i and mat[y][j]==1 ){
                            flag=false;
                            break;
                        }
                    }
                    if(flag)count++;
                }
            }
        }
        return count;
    }
};