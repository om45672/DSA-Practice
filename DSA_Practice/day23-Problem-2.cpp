Time Limit Exceeded 125 / 126 testcases passed

class Solution {
public:
    bool is_palindrome(const string& s, int end) {
        int left = 0, right = end;
        while (left < right) {
            if (s[left++] != s[right--]) {
                return false;
            }
        }
        return true;
    }

    string shortestPalindrome(string s) {
        int n = s.size();
        int i = n - 1;
        while (i >= 0 && !is_palindrome(s, i)) {
            i--;
        }
        string add = s.substr(i + 1);
        reverse(add.begin(), add.end());
        return add + s;
    }
};
