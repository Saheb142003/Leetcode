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
#define ll long long 
static const int MOD = 1e9 + 7;
    ll solve(TreeNode *root,ll sum,ll &maxi){
        if(root==NULL) return 0;
        
        ll left=solve(root->left,sum,maxi);
        ll right=solve(root->right,sum,maxi);
        
        ll curr=left+right+root->val;
        ll temp=(sum-curr)*curr;
        
        maxi=max(maxi,temp);
        return curr;
    }

    void sumt(TreeNode*root,ll &sum){
        if(root==NULL) return ;
        sumt(root->left,sum);
        sum+=root->val;
        sumt(root->right,sum);
    }
    int maxProduct(TreeNode* root) {
        ll sum=0;
        sumt(root,sum);
        ll maxi=0;
        solve(root,sum,maxi);
        return maxi % MOD;
    }
};