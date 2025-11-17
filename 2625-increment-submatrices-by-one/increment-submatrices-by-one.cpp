class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>>ans(n,vector<int>(n, 0));
        for(int i=0;i<q.size();i++){
            for(int rs=q[i][0];rs<=q[i][2];rs++){
                for(int cs=q[i][1];cs<=q[i][3];cs++){
                    ans[rs][cs]++;
                }
            }
        }
        return ans;
    }
};