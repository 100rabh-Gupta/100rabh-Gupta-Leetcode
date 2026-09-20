class Solution {
public:
    int reverseDegree(string s) {
       int sum=0;
       for ( int i=0;i<s. size();i++){
        char ch=s[i];
        sum+=(i+1)*int(('z'-ch)+1);
       } return sum;
    }
};