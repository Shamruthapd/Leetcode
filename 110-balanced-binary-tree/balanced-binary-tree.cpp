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
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(depth(root->left),depth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL){
            return true;
        }
        int x=depth(root->left);
        int y=depth(root->right);
        if(abs(x-y)>1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};