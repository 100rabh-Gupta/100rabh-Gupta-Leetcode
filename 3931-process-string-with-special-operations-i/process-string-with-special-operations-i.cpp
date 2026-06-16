class Solution {
public:
    string processStr(string s) {
        string ans="";
        for ( int i =0;i<s.size();i++){
             if ( s[i]=='*'){
                 if (ans.empty()) continue;
                string temp= ans;
                ans="";
                for ( int i=0;i<temp.size()-1;i++){
                    ans+=temp[i];
                }

             }
             else if ( s[i]=='#'){
               if (ans.empty()) continue;
                string temp= ans;
                ans+=temp;
             }
             else if( s[i]=='%'){
               if (ans.empty()) continue;
               reverse(ans.begin(),ans.end());
             }
             else {
                 ans+=s[i];
             }
             cout<<ans<<endl;
        }
        return ans;
        
    }
};