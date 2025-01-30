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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        TreeNode* node = new TreeNode(0);

        int maxindex = 0, maxvalue = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > maxvalue){
                maxvalue = nums[i];
                maxindex = i;
            }
        }

        node->val = maxvalue;
        if(maxindex > 0){
            vector<int> lefttree(nums.begin(), nums.begin() + maxindex);
            node->left = constructMaximumBinaryTree(lefttree);
        }

        if(maxindex < nums.size() - 1){
            vector<int> righttree(nums.begin()+maxindex+1, nums.end());
            node->right = constructMaximumBinaryTree(righttree);
        }

        return node;
    }
};
