class Solution {
public:
    int findGCD(vector<int>& nums) {
        if ( nums.size()<2)return nums[0];
         int a= *min_element( nums.begin(),nums.end());
          int b= *max_element( nums.begin(),nums.end());
          return gcd(b,a);


        
    }
};