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
    int curr_sum=0;
    void travel(TreeNode* root)
    {
        if(!root)return;
        if(root->right)travel(root->right);
        root->val = (curr_sum += root->val);
        if (root->left) travel(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        travel(root);
        return root;
    }
};