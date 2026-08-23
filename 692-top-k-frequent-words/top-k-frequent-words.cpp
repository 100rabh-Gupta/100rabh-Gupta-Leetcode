class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        map<string, int> m;
        for (int i = 0; i < words.size(); i++) {
            m[words[i]]++;
        }

        while (k) {
            int mxfeq = 0;
            string selected ;
            for (auto& it : m) {
                if (mxfeq < it.second) {
                    selected = it.first;
                    mxfeq = it.second;
                }
            }
            k--;
            ans.push_back(selected);
              m.erase(selected);
        }
    

    return ans;
}
}
;