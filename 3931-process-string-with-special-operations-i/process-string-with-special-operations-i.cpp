class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                if (ans.empty())
                    continue;

                ans.pop_back();

            } else if (s[i] == '#') {
                if (ans.empty())
                    continue;
                string temp = ans;
                ans += temp;

            } else if (s[i] == '%') {
                if (ans.empty())
                    continue;
                reverse(ans.begin(), ans.end());
            } else {
                ans.push_back(s[i]);
            }
            cout << ans << endl;
        }
        return ans;
    }
};