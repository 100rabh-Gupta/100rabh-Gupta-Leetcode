class Solution {
public:
int gcd(int a,int b){
     if ( a<b)swap(a,b);

     if (b==0)return a;
     return gcd(b,a%b);
}
    long long gcdSum(vector<int>& nums) {
        int mx= INT_MIN;
        vector<int>gcdmax;
        for ( int i=0 ;i<nums.size();i++){
            mx=max(nums[i],mx);
            gcdmax.push_back(gcd(nums[i],mx));
        }
        sort (gcdmax.begin(),gcdmax.end());
        int s=0,e=nums.size()-1;
        long long sum=0;
        while ( s<e){
         sum+=   gcd(gcdmax[e],gcdmax[s]);
         s++;
         e--;

        }

        return sum;
        
    }
};