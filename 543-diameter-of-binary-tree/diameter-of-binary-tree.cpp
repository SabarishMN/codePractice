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
    int maxdiameter = 0;

    int getdepth(TreeNode* node) {
        if(node == nullptr) return 0;

        int leftdepth = getdepth(node->left);
        int rightdepth = getdepth(node->right);

        maxdiameter = max(maxdiameter, leftdepth + rightdepth);

        return 1 + max(leftdepth, rightdepth);
    }
    int diameterOfBinaryTree(TreeNode* root) {



            getdepth(root);
            return maxdiameter;



            
        
    }
};