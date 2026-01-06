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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=INT_MIN;
        int level=1;
        int maxlevel=0;
        while(!q.empty()){
            int n=q.size();
            int csum=0;
            while(n--){
                TreeNode*temp=q.front();
                q.pop();
                csum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(csum>sum){
                sum=csum;
                maxlevel=level;
            }
            level++;
        }
        return maxlevel;
    }
};