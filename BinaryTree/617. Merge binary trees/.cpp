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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        queue<TreeNode*> que;
        if(root1 == NULL && root2 != NULL) return root2;
        else if(root1 != NULL && root2 == NULL) return root1;
        else if(root1 == NULL && root2 == NULL) return NULL;

        que.push(root1);
        que.push(root2);

        while(!que.empty()){
            TreeNode* node1 = que.front();
            que.pop();
            TreeNode* node2 = que.front();
            que.pop();
            node1->val = node1->val + node2->val;

            if(node1->left != NULL && node2->left != NULL){
                que.push(node1->left);
                que.push(node2->left);
            }
            if(node1->right != NULL && node2->right != NULL){
                que.push(node1->right);
                que.push(node2->right);
            }

            if (node1->left == NULL && node2->left != NULL) {
                node1->left = node2->left;
            }
        
            if (node1->right == NULL && node2->right != NULL) {
                node1->right = node2->right;
            }
        }
        return root1;
    }
};
