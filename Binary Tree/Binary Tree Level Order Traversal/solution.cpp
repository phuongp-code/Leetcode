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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        if (root == nullptr) return a;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> b;
            int cnt = q.size();
            for (int i = 0; i < cnt; i++) {
                TreeNode *cur = q.front();
                q.pop();
                b.push_back(cur->val);
                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);
            }
            a.push_back(b);
        }
        return a;
    }
};
