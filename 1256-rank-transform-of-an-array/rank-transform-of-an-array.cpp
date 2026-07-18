class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int r=1;
        vector<int>temp=arr;
        
        sort(temp.begin(),temp.end());
        unordered_map<int,int>rank;
       for ( int x: temp){
        if ( rank.find(x)==rank.end()){
            rank[x]=r++;
        }
       }
       for ( int &x: arr){
        x=rank[x];
       }
       return arr;



             



        









        
    }
};