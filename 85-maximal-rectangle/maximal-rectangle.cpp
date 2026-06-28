class Solution {
public:
int rectagle(vector<int>&height){
     int ans=0;
     int n= height.size();
     stack<int>s;
     for ( int i=0;i<height.size();i++){
        while(!s.empty() && height[s.top()]>height[i]){
             int val=s.top();
             s.pop();
             int area;
             if ( !s.empty()){
                area= height[val]*(i-s.top()-1);
             }
             else area= height[val]*(i);
ans= max(ans,area);
        }
        s.push(i);
        
         
     }

     while(!s.empty()){

         int val=s.top();
             s.pop();
             int area;
             if ( !s.empty()){
                area= height[val]*(n-s.top()-1);
             }
             else area= height[val]*(n);

        
        ans= max(ans,area);
         
     }
     return ans;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans =0;
        int row=matrix.size();
        int col= matrix[0].size();
        vector<int>height(col,0);
        for ( int i=0;i<row;i++){
            for ( int j=0;j<col;j++){
                 if ( matrix[i][j]=='0')height[j]=0;
                 else height[j]+=1;

                 
            }
            ans= max(ans,rectagle(height));

        }
        return ans;



        
    }
};