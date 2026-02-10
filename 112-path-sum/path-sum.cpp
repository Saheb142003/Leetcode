/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, int x, int curr, bool &ans) {
        if (root == NULL)
            return;
        curr += root->val;
        if (root->left == NULL and root->right == NULL and curr == x) {
            ans = true;
        }
        solve(root->left, x, curr, ans);
        solve(root->right, x, curr, ans);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans = false;
        solve(root, targetSum, 0, ans);
        return ans;
    }
};