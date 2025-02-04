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
private:
    TreeNode* pre = NULL;
    int maxcount = 0;
    int count = 0;
    vector<int> result;
    void traversal(TreeNode* cur){
        if(cur == NULL) return;
        traversal(cur->left);
        if(pre == NULL) count = 1;
        else if(pre->val == cur->val) count++;
        else count = 1;
        pre = cur;
        if(count == maxcount) result.push_back(cur->val);
        if(count > maxcount){
            maxcount = count;
            result.clear();
            result.push_back(cur->val);
        }

        traversal(cur->right);

    }
public:
    vector<int> findMode(TreeNode* root) {
        traversal(root);
        return result;
    }
};
