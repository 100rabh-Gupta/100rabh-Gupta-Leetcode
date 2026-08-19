/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<tuple<TreeNode*, int, int>> q;
        map<int, vector<pair<int, int>>> m;
        q.push({root, 0, 0});
        while (!q.empty()) {

            auto [cur, row, col] = q.front();
            q.pop();
            m[col].push_back({row, cur->val});
            if (cur->left)
                q.push({
                    cur->left,
                    row + 1, col - 1
                });
            if (cur->right)
                q.push({cur->right, row + 1, col + 1});
        }
        for (auto it : m) {
            sort(it.second.begin(), it.second.end());
            vector<int> temp ;
 for (auto p : it.second) {
                temp.push_back(p.second);
            }            ans.push_back(temp);
        }
        return ans;
    }
};