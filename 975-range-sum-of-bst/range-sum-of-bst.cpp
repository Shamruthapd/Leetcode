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
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        int s=0;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* temp=st.top();
            st.pop();
            
            if(temp->val>=low && temp->val<=high){
                s+=temp->val;
            }
            if(temp->right){
                st.push(temp->right);
            }
            if(temp->left){
                st.push(temp->left);
            }
        }
        return s;
    
    }
};