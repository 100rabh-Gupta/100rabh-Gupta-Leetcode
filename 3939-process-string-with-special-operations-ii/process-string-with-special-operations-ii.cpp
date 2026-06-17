class Solution {
public:
    char processStr(string s, long long k) {



        int n = s.size();

        const long long LIM = 1e15;

        vector<long long> len(n + 1, 0);

       
        for ( int i =0;i<n;i++){
            len[i+1]= len[i];
             if ( s[i]=='*'){
                if (len[i + 1] > 0)     
                    len[i+1]--;

             }
             else if ( s[i]=='#'){
              
                   len[i + 1] = min(LIM, len[i + 1] * 2);
             }
             else if (s[i]=='%') {

        // length unchanged

    }
    else {

        len[i+1]++;

    }
            
         
        }
         if (k >= len[n])
            return '.';

            for ( int i=n-1;i>=0;i--){
                 char c= s[i];

                  if (c == '%') {
                long long L = len[i + 1];
                k = L - 1 - k;
            }
            else if(c=='*'){ 

            }
            else if (c=='#'){
                long long old = len[i];

                if (k >= old)
                    k -= old;

            }
             else {

        

                if (k == len[i])
                    return c;
            }
            }
            return '.';
      
    }
};