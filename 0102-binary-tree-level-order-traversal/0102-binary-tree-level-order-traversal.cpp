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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v1;
        if(root==nullptr) return v1;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();

            vector<int> v2;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                v2.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            v1.push_back(v2);

        }
        return v1;
        
    }
};