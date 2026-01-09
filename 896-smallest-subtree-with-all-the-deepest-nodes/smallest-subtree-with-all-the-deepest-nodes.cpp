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
    int solve(TreeNode* root, TreeNode*& ans, int level, int& maxl) {
        if (root == NULL)
            return level-1;
        int left = solve(root->left, ans, level + 1, maxl);
        int right = solve(root->right, ans, level + 1, maxl);
        int l=max(left,right);
        if (left == right and l>=maxl) {
                maxl = l;
                ans = root;
        }
        return l;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        TreeNode* ans = NULL;
        int maxl = -1;
        solve(root, ans, 0, maxl);
        return ans;
    }    
};