class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string r = a;

        while (r.size() < b.size()) {
            r += a;
            count++;
        }

        if (r.find(b) != string::npos) return count;

        r += a;
        count++;
        if (r.find(b) != string::npos) return count;
        
        return -1;
    }
};
