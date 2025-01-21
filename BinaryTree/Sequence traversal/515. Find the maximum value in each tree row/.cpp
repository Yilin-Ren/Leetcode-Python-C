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
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> que;
        if(root != NULL) que.push(root);
        while(!que.empty()){
            int size = que.size();
            int max = que.front()->val;
            for(int i = 0; i<size; i++){
                TreeNode* node = que.front();
                que.pop();
                if(node->val > max) max = node->val;
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            result.push_back(max);
        }   
        return result;
    }
};
