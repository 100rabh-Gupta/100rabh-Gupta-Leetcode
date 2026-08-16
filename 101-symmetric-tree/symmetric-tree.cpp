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
bool isMirror(TreeNode* p,TreeNode* q){
    if(!p||!q)return p==q;
    return isMirror(p->left,q->right)&&isMirror(p->right,q->left)&&p->val==q->val;
}
    bool isSymmetric(TreeNode* root) {
        if (!root)return 1;
        return isMirror(root->right,root->left);
        
    }
};