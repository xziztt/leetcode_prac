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
    
    vector<int> inOrderTraversal;
     void helper(TreeNode* root){
        if(root){
         helper(root->left);
         inOrderTraversal.push_back(root->val);
         helper(root->right);
        }else{
            return;
        }

    }
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
        return inOrderTraversal;
    }
};
