class Solution {
public:
    int minDeletion(vector<int>& nums) {
           vector<int> ans;
        int count = 0;

         for ( int i=0;i<nums.size();i++){
             if (ans.size()%2){
                 if (ans.back()!=nums[i]){
                    ans.push_back(nums[i]);
                 }
                 else  count++;
             }
             else {
                ans.push_back(nums[i]);
             }
             
         }
         if ( ans.size()%2){
            count++;
         }
         return count++;
    }
};