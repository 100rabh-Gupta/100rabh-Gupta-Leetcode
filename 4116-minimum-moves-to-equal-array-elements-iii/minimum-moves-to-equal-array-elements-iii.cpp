class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi= INT_MIN;
        for ( int i : nums){
            maxi=max(i,maxi);
        }
        int moves=0;
        for( int i : nums){
            moves +=abs(i-maxi);   
        }
        return moves ;
        
    }
};