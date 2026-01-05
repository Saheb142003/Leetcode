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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int n=q.size();
            vector<int>temp(n);

            for(int i=0;i<n;i++){
            TreeNode* top=q.front();
            q.pop();
            int idx=flag?n-1-i:i;
            temp[idx]=(top->val);

            
            if(top->left!=NULL) q.push(top->left);
            if(top->right!=NULL) q.push(top->right);
                
            }
            flag=!flag;
            
            ans.push_back(temp);

        }
        return ans;
    }
};