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
    void treetraversal(vector<int> &v1,TreeNode* root){
        if(root==NULL) return;
        treetraversal(v1,root->left);
        treetraversal(v1,root->right);
        v1.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v1;
        treetraversal(v1,root);
        return v1;
        
    }
};