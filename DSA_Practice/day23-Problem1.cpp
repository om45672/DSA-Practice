class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string repeated = a;
        
        // Repeat "a" until its length is at least that of "b"
        while (repeated.size() < b.size()) {
            repeated += a;
            count++;
        }
        
        // Check if "b" is a substring of the current repeated string
        if (repeated.find(b) != string::npos) return count;

        // Append one more "a" and check again
        repeated += a;
        count++;
        if (repeated.find(b) != string::npos) return count;
        
        return -1;
    }
};
