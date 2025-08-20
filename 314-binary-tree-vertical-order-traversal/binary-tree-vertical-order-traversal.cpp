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
    vector<vector<int>> verticalOrder(TreeNode* root) {

        vector<vector<int>> ans;

        if(!root) {
            return ans;
        }
        map<int,vector<int>> colmap;

        queue<pair<TreeNode*, int>> q;
        q.push({root,0});

        while(!q.empty()) {
            auto [node, col] = q.front();
            q.pop();
            colmap[col].push_back(node->val);
            if(node->left)
            q.push({node->left, col-1});//left
            if(node->right)
            q.push({node->right, col + 1});//right
        }

        for(auto& [col, values]: colmap) {
            ans.push_back(values);
        }

        return ans;
    }
};