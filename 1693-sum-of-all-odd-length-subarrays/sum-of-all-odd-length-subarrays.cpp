class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
         int sum=0,n=arr.size();

          for ( int i=0 ;i<n ;i++){
             int odd = ((i+1)*(n-i));
             odd++;
             odd/=2;
             sum +=odd*arr[i];
             
          }
           return sum;
        
    }
};