class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=0;
    int s=0;
         for ( int i=0;i<nums.size();i++){
int e= nums[i];
            if ( e>=f){s=f;
            f=e;
            
            }
             
         
         if ( e>s&&e<f){
            s=e;
         }


         }
    return (f-1)*(s-1);
    }

};