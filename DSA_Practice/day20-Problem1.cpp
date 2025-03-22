class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for (char c : s) 
            mpp[c]++;
        vector<pair<char, int>> freq(mpp.begin(), mpp.end());
        sort(freq.begin(), freq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
        s.clear();
        for (auto &it : freq) {
            s.append(it.second, it.first);
        }
        return s;
    }
};
