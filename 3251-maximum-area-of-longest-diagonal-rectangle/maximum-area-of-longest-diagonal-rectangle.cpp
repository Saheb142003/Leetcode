class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int n=dim.size();
        int maxDia=0;
        int maxArea=0;
        for(int i=0;i<n;i++){
            int l=dim[i][0];
            int w=dim[i][1];

            int diag=l*l+w*w;
            int area=l*w;
            if(diag>maxDia){
                maxDia=diag;
                maxArea=area;
            }
            else if(diag==maxDia){
                maxArea=max(area,maxArea);
            }
        }
        return maxArea;
    }
};