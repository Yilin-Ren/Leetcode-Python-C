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
    TreeNode* traversal(vector<int>& inorder, vector<int>& postorder){
        if(postorder.size() == 0) return NULL;
        
        int rootValue = postorder[postorder.size()-1];
        TreeNode* root = new TreeNode(rootValue);

        if(postorder.size() == 1) return root;

        int cutindex;
        for(cutindex = 0; cutindex<inorder.size(); cutindex++){
            if(inorder[cutindex] == rootValue) break;
        }
        vector<int> leftInorder(inorder.begin(), inorder.begin() + cutindex);
        vector<int> rightInorder(inorder.begin() + cutindex + 1, inorder.end() );

        postorder.resize(postorder.size()-1);
        vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size());
        vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());

        root->left = traversal(leftInorder, leftPostorder);
        root->right = traversal(rightInorder, rightPostorder);
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() == 0 || postorder.size() == 0) return NULL;
        return traversal(inorder, postorder);
    }
};
