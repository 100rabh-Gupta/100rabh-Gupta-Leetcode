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
    int widthOfBinaryTree(TreeNode* root){
        queue<pair<TreeNode*, unsigned long long>>q;
        q.push({root,0});

        int mxwidth=0;
        while(!q.empty()){
            int n=q.size();
            unsigned long long stind=q.front().second;
            unsigned long long endind=q.back().second;
            mxwidth=max(mxwidth,(int)(endind-stind+1));
            while(n--){
                auto cur=q.front();
                q.pop();
                if(cur.first->left){
                    q.push({cur.first->left,2*cur.second+1});
                }
                if(cur.first->right){
                    q.push({cur.first->right,2*cur.second+2});
                }
            }
        }
        return mxwidth;

        

    }
};