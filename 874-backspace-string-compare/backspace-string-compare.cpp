class Solution {
public:
    bool backspaceCompare(string s, string t) {
         stack<char>st;

        for (int i=0;i<s.size();i++){
             if ( s[i]=='#'){
                   if(!st.empty())
                st.pop();
             }
             else st.push(s[i]);
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
            
        }


        for (int i=0;i<t.size();i++){
             if ( t[i]=='#'){
                   if(!st.empty())
                st.pop();
             }
             else st.push(t[i]);
        }
        t="";
        while(!st.empty()){
            t+=st.top();
            st.pop();
            
        }
       return s==t;

        
    }
};