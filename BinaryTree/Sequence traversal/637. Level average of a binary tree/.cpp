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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> que;
        vector<double> result;
        if(root != NULL) que.push(root);
        while(!que.empty()){
            int size = que.size();
            double sum = 0;
            for(int i = 0; i<size; i++){
                TreeNode* node = que.front();
                sum += node->val;
                que.pop();
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            result.push_back(sum / size);
        }
        return result;
    }
};
