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
int search(vector<int>& inorder,int left,int right, int k){
    for ( int i=left;i<=right;i++){
        if (inorder[i]==k)return i;
    }
    return -1;
}
TreeNode*helper(vector<int>& inorder, vector<int>& postorder,int left,int right,int &pind){
    if (left>right)return nullptr;
    TreeNode*root= new TreeNode(postorder[pind]);
    int inind=search(inorder,left,right,postorder[pind]);
    pind++;
    root->right=helper(inorder,postorder,inind+1,right,pind);
    root->left=helper(inorder,postorder,left,inind-1,pind);
    
return root;

}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        reverse(postorder.begin(),postorder.end());
int pind=0;
       return  helper(inorder,postorder,0,postorder.size()-1,pind);
        
    }
};