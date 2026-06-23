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
void traversing(vector<vector<int>>&ans,TreeNode*root){
   

    queue<TreeNode*>q;
    q.push(root);
TreeNode*t;
ans.push_back({root->val});
    while(!q.empty()){
        vector<int>temp;
        int n=q.size();
        while(n--){
        t=q.front();
        q.pop();
        
        if ( t->left){
            temp.push_back(t->left->val);
            q.push(t->left);

        }
        if ( t->right){
             temp.push_back(t->right->val);
            q.push(t->right);
            
        }
        }
        if ( !temp.empty()){
            ans.push_back(temp);
        }

    }
        


    
}
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        if( root==nullptr)return  ans;

traversing(ans,root);
return ans;
 
        
    }
};