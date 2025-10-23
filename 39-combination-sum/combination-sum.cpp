class Solution {
public:
    void solve(vector<int>&arr,int i,int t,vector<vector<int>>&ans,vector<int>&com){
        if(i==arr.size() or t<0) {
            return ;
        }
        if(t==0){
            ans.push_back({com});
            return ;
        }
        com.push_back(arr[i]);
        solve(arr,i,t-arr[i],ans,com);
        
        com.pop_back();
        solve(arr,i+1,t,ans,com);


    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>com;
        solve(candidates,0,target,ans,com);
        return ans;
    }
};