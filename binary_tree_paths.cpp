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


    vector<string> pathV;

    void solve(TreeNode* root,string path){
        if(root == NULL){
            return;
        }

        path+=to_string(root->val);

        if(root->left == NULL && root->right == NULL){
            pathV.push_back(path);
        }
        path+="->";


        solve(root->left,path);
        solve(root->right,path);
        cout<<"poping";
        path.pop_back();

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string path = "";
        solve(root,path);
        return pathV;


    }
};
