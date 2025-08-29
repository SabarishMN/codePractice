/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
TreeNode* ans = NULL;

    bool recurseTree(TreeNode* node, TreeNode* p, TreeNode* q) {

        if(node == NULL) return false;
        int left = recurseTree(node->left, p, q) ? 1 : 0;
        int right = recurseTree(node->right, p, q) ? 1 :0;
        int mid = (node == p || node == q) ? 1 : 0;

        if(mid + left + right >= 2) ans = node;

        return (mid + left + right > 0);
            }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            recurseTree(root, p, q);
            return ans;
        
    }
};