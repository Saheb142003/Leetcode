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
    void preorder(vector<int>&ans,TreeNode* root){
     
     stack<TreeNode*>arr;
     arr.push(root);
     while(!arr.empty()){
        root=arr.top();
        arr.pop();
        ans.push_back(root->val);
        
        if(root->right!=NULL){ 
            arr.push(root->right);    
        }
        if(root->left!=NULL){ 
            arr.push(root->left);    
        }
     }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<int>ans;
       preorder(ans,root);
        return ans;
    }
};