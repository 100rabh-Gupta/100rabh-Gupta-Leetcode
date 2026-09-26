class Solution {
public:
    string evaluate(string s, vector<vector<string>>& K) {
         unordered_map<string, string> d;
        for (auto& k : K)
            d[k[0]] = k[1];

            string res;
            for ( int i=0;i<s.size();i++){

            if (s[i]=='('){
                int j=s.find(')',i+1);
            string t=s.substr(i+1,j-i-1);
               if ( d.find(t)==d.end()){
                res+='?';
               }
               else res+=d[t];
               
                i=j;
            }

                else {
                    res+=s[i];
                }
            }
            return res;
    }
};