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
    int solve(int &ans,TreeNode *root){
        if(root==NULL) return 0;
        int left=(solve(ans,root->left));
        int right=(solve(ans,root->right));
        int maxi=max({(left+right+root->val),left+root->val,right+root->val,root->val});
        ans=max(ans,maxi);
        return max({left+root->val,right+root->val,root->val});

    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        solve(ans,root);
        return ans;
    }
};