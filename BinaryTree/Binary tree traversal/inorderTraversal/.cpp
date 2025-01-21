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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if(root != NULL) st.push(root);
        while(!st.empty()){
            TreeNode* cur = st.top();
            if(cur != NULL){
                st.pop();
                if(cur->right) st.push(cur->right);
                st.push(cur);
                st.push(NULL);
                if(cur->left) st.push(cur->left);
            }
            else{
                st.pop();
                cur = st.top();
                st.pop();
                result.push_back(cur->val);
            }
        }
        return result;


        return result;
    }
};
