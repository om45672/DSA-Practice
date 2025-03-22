class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        
        // Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // Handle sign
        bool isNegative = false;
        if (i < n && s[i] == '+') {
            i++;
        } else if (i < n && s[i] == '-') {
            isNegative = true;
            i++;
        }
        
        int ans = 0;
        
        // Process digits
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            
            // Check for overflow/underflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            
            ans = ans * 10 + digit;
            i++;
        }
        
        // Apply sign
        if (isNegative) {
            ans = -ans;
        }
        
        return ans;
    }
};
