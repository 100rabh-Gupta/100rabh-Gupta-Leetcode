class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>lastchar(26);
        vector<bool>instack(26,false);
        for ( int i=0;i<s.size();i++){
             lastchar[s[i]-'a']=i;
        }
        string st;

    
    for ( int i=0;i<s.size();i++){
    char l=s[i];
    if ( instack[l-'a'])continue;

    while(!st.empty()&&st.back()>l &&lastchar[st.back()-'a']>i){
        instack[st.back()-'a']=false;
        st.pop_back();
    }
    st.push_back(l);
    
    instack[l-'a']=true;
    }
    return st;

        
    }
};