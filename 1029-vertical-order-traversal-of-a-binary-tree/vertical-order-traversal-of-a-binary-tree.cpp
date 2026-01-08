/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, vector<vector<int>>&ans,int col,int level,
    map<int,vector<pair<int,int>>>&mp){
        if(root==NULL) return ;

        mp[col].push_back({level,root->val});
        solve(root->left,ans,col-1,level+1,mp);
        solve(root->right,ans,col+1,level+1,mp);
        
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        int col=0;
        map<int,vector<pair<int,int>>>mp;
        solve(root,ans,col,0,mp);
        for(auto i:mp){
            vector<pair<int,int>>temp=i.second;
            sort(temp.begin(),temp.end());
            vector<int>res;
            for(auto j:temp){
                res.push_back(j.second);
            }
            ans.push_back(res);
        }
        return ans;
    }
};