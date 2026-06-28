class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n = heights.size();
         stack<int>s;
int ans=INT_MIN;
         for ( int i =0;i<n;i++){
             while( !s.empty() && heights[i]<heights[s.top()]){
                 int val= s.top();
                 s.pop();
                 int area;
                 if ( s.empty()){
                    area= heights[val]*i;
                     
                 }
                 else {
                     area= heights[val]*(i-s.top()-1);
                 }
                 ans= max(area,ans);
             }
             s.push(i);
         }

         while( !s.empty() ){
                 int val= s.top();
                 s.pop();
                 int area;
                 if ( s.empty()){
                    area= heights[val]*n;
                     
                 }
                 else {
                     area= heights[val]*(n-s.top()-1);
                 }
                 ans= max(area,ans);
             }
          
        return ans;
    }
};