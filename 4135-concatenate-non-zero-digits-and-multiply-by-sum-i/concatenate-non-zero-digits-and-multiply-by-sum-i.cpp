class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n==0)return 0;
        
   string ans="";
   string l=to_string(n);
   int sum=0;
for ( int i=0;i<l.size();i++){
     if ( l[i]!='0'){
        ans+=l[i];
        sum+=l[i]-'0';
     }
}



   
long long s=stoi(ans);
s*=sum;

return s;
    }
};