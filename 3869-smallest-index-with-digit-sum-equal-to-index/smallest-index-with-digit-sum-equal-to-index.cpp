class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for ( int i=0;i<nums.size();i++){
            int sum=0;
            int d=nums[i];
            while(d){
                sum+=d%10;
                d/=10;

            }
            if (i==sum)
            return i;
        }
        return -1;
        
    }
};