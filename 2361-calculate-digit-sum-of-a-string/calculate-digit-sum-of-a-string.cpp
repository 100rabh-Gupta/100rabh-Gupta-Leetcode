class Solution {
public:
    string digitSum(string s, int k) {


        string st=s;
        while (st.size()>k){
            string temp="";
            int ind=0;
while(ind<st.size()){
            int sum=0;
            int i=0;
           while((ind+i)<st.size()&&i<k){
                sum+=st[i+ind]-'0';
                i++;
                
            }
           temp += to_string(sum);
            ind+=i;

        }
        st=temp;
        }
        return st;
    }
};