class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> ans;
        int count=-1;
        stack<char>s;
            count++;
            s.push(seq[0]);
             ans.push_back(count%2);
             int i=1;
        while(i<seq.size()){
            
            
                if (seq[i]=='('){
                    count++;
                     s.push(seq[i]);
                    ans.push_back(count%2);
                }
                if(seq[i]==')'){
                s.pop();
                ans.push_back(count%2);
                count--;
            }
            i++;
        }

    
        return ans;
    }
};