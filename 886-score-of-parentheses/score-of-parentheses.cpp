class Solution {
public:
    int scoreOfParentheses(string st) {


stack<int>s;
s.push(0);
int ind=0;
for (char c:st){
    
    

    if ( c=='('){
        s.push(0);
    }

    if(c==')'){
       int last= s.top();
       s.pop();
       s.top()+=max(1,last*2);
    }

}
    
    


      return s.top();  
    }
}; 