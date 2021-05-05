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
    vector<int> v;
    void solve(TreeNode *root){
        if(root == NULL){
            v.push_back(-1);
            return;
        }
        v.push_back(root->val);
        solve(root->left);
        solve(root->right);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<int> v1,v2;
        solve(p);
        v1 = v;
        v.clear();
        solve(q);
        v2 = v;
        v.clear();
        if(v1 == v2){
            return true;
        }
        else{
            return false;
        }


    }
};
