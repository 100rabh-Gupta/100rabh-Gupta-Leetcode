class Solution {
public:
    bool checkInclusion(string s1, string s2) {
if (s1.size()>s2.size())return 0;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        int end=s1.size();
        for ( int i=0;i<s1.size();i++){
            f1[s1[i]-'a']++;
        }
        for( int i=0;i<end;i++){
         
                 f2[s2[i]-'a']++;
        }
        if (f1==f2)return true;
int start=0;
          while(end<s2.size()){
         
                 f2[s2[end]-'a']++;

                 f2[s2[start]-'a']--;
                 start++;

                 if(f1==f2)return true;

                 end++;
        }
        return false;



        
    }
};