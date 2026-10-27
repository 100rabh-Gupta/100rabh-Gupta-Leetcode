class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> ans(m, vector<char>(n,'#'));
        int i = 0, j = 0;
     ans[i][j] = '.';
        while (i < m -1|| j < n-1) {
       
            if (j < n-1) {
                j++;
                ans[i][j] = '.';
            }
            if (i < m-1) {
                i++;
                ans[i][j] = '.';
            }
        }
       
        vector<string> res;
        for ( int i=0;i<m;i++){
           string temp="";
for ( int j=0;j<n;j++){
    temp.push_back(ans[i][j]);
}
res.push_back(temp);


        }
        return res;
    }
};