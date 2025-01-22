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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> que;
        if(root != NULL) que.push(root);
        while(!que.empty()){
            int size = que.size();
            for(int i = 0; i<size; i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->left){
                    que.push(node->left);
                    if(!(node->left->left || node->left->right)) sum += node->left->val;
                }
                if(node->right) que.push(node->right);
            }
        }
        return sum;
    }
};
