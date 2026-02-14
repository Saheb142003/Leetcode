class Solution {
public:
    double t[101][101];
    double solve(int poured,int i,int j ){
        if(i<0 or j<0 or i<j) return 0.0;
        if(i==0 and j==0) return poured;
        if(t[i][j]!=-1){
            return t[i][j];
        }
        double upleft=(solve(poured,i-1,j-1)-1)/2.0;
        double upright=(solve(poured,i-1,j)-1)/2.0;
        if(upleft<0) upleft= 0.0;
        if(upright<0) upright= 0.0;
        return t[i][j]=upleft+upright;
    }
    double champagneTower(int poured, int query_row, int query_glass) {
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                t[i][j]=-1;
            }
        }
        return min(1.0,solve(poured,query_row,query_glass));
    }
};