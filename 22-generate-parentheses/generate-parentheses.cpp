class Solution {
public:

void parathesis(int n,int l,int r, vector<string>&ans,string &temp){
    if ( l+r==2*n){ans.push_back(temp);
    return;}
    if ( l<n){
         temp.push_back('(');
         parathesis(n,l+1,r,ans,temp);
         temp.pop_back();
    }

   if ( l>r){
     temp.push_back(')');
         parathesis(n,l,r+1,ans,temp);
         temp.pop_back();
   }


}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        parathesis(n,0,0,ans,temp);
        return ans;

        

        
    }
};