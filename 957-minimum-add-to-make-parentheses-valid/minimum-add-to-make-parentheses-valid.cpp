class Solution {
public:
    int minAddToMakeValid(string st) {
stack<char>s;
int count=0;
        for ( int i =0;i<st.size();i++){
             if(st[i]=='('){
                s.push(st[i]);
             }
             else{if (s.empty()){
                count++;}
                 else s.pop();
             } 
            
        }
        return s.size()+count;
        
    }
};