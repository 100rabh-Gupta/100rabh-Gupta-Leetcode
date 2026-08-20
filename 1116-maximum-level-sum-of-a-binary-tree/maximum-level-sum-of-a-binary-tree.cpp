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
    int maxLevelSum(TreeNode* root) {
         int ans =INT_MIN; 
         int out=-1;
         queue<TreeNode*>q;
         q.push(root);
         int level=1;
         while(!q.empty()){
            int sum=0;
            
            int n=q.size();
            while(n--){
                 TreeNode*temp=q.front();
                 q.pop();
                 sum+=temp->val;
                 if(temp->left)q.push(temp->left);
                 if(temp->right)q.push(temp->right);
            }
         if (sum>ans){ans=sum;
out=level;
}         
level++;
             
         }
         return out;
         
        
        
    }
};