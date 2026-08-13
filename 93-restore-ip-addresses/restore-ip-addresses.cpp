class Solution {
public:

    bool isValid(string s) {
        if (s.empty() || s.size() > 3)
            return false;

        // Leading zero
        if (s.size() > 1 && s[0] == '0')
            return false;

        int num = stoi(s);

        return num <= 255;
    }
        void solve(string &s, int index, int parts,
               string current, vector<string>& ans) {

        // We have created 4 parts
        if (parts == 4) {
            if (index == s.size()) {
                current.pop_back(); // remove last '.'
                ans.push_back(current);
            }
            return;
        }

        // Try taking 1, 2, or 3 digits
        for (int len = 1; len <= 3; len++) {

            if (index + len > s.size())
                break;

            string part = s.substr(index, len);

            if (!isValid(part))
                continue;

            solve(
                s,
                index + len,
                parts + 1,
                current + part + ".",
                ans
            );
        }
    }
    vector<string> restoreIpAddresses(string s) {
         vector<string> ans;

        if (s.size() < 4 || s.size() > 12)
            return ans;

        solve(s, 0, 0, "", ans);

        return ans;
    }
};