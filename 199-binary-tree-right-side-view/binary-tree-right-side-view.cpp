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
    vector<int> rightSideView(TreeNode* root) {

        if(root == nullptr) return vector<int>();


        vector<int> ans;

        queue<TreeNode*> queue;
        queue.push(root);

        while(!queue.empty())
        {
            int breadth = queue.size();

            for(int i=0;i<breadth;i++)
            {
                TreeNode* node = queue.front();

                if(node->left) queue.push(node->left);
                if(node->right) queue.push(node->right);
                
                if(i == breadth-1)
                {
                    ans.push_back(node->val);
                }

                queue.pop();
            }

        }

        return ans;
    }
};