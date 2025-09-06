class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
            vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            vector<int>temp(i+1,1);
            ans.push_back(temp);
        }
        for(int i=2;i<n;i++){
            int m=ans[i].size();
            for(int j=1;j<m-1;j++){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};