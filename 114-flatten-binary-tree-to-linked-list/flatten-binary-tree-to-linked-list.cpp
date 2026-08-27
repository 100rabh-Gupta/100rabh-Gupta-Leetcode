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
    void flatten(TreeNode* root) {
       while(root){ 
    while(root->left){
        TreeNode*cur=root->left;
        while(cur->right&&cur->right!=root){
            cur=cur->right;
                    }
                    if (!cur->right){cur->right=root->right;
                    if(root->left)root->right=root->left;
                    root->left=nullptr;
                    }
                    root=root->right;
                    
        }   
        root=root->right;
       }
    }
};