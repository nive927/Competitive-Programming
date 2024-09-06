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
    TreeNode* invertTree(TreeNode* root) {

        if(root != nullptr)
        {
            // handle sub-tree
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left, root->right);

            // NOTE: what swap does
            // TreeNode *tempNode = new TreeNode();
            // tempNode = root->left;
            // root->left = root->right;
            // root->right = tempNode;

        }

        // need to handle whole sub-tree
        return root;
        
    }
};