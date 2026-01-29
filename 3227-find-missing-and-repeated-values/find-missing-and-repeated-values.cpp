class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int sum=0;
        n=n*n;
        if(n%2==0){
            sum=(n/2)*(n+1);
        }
        else{
            sum=n*((n+1)/2);
        }

        int rep=0;int mis=0;
        int count=0;

        unordered_map<int,int>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                count+=grid[i][j];
                mp[grid[i][j]]++;
                if(mp[grid[i][j]]==2) {
                    rep=grid[i][j];
                }
            }
        }
         mis=(sum-(count-rep));  
        return {rep,mis};
    }
};