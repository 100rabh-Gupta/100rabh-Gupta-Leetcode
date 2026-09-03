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
 int search( vector<int> &inorder, int left ,int right,int k){
      for ( int i=left;i<=right;i++){
          if (inorder[i]==k)return i;
      }
      return -1;
  }
 TreeNode* helper(vector<int> &inorder, vector<int> &preorder,int left, int right , int &preindex){
      if (left>right)return nullptr;
      TreeNode* root=new TreeNode(preorder[preindex]);
      int inind=search(inorder,left,right,preorder[preindex]);
      preindex++;
      root->left=helper(inorder,preorder,left,inind-1,preindex);
      root->right=helper(inorder,preorder,inind+1,right,preindex);
      
      return root;
  }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex=0;
        return helper(inorder,preorder,0,preorder.size()-1,preindex);
        
    }
};