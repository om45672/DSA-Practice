Time Limit Exceeded 125 / 126 testcases passed

class Solution {
public:
    bool is_palindrome(const string& temp){
        int n = temp.size();
        for(int i=0;i<n/2;i++){
            if(temp[i]!=temp[n-i-1]) return false;
        }
        return true;
    }
    string shortestPalindrome(string s) {
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
        string temp = s;
        string add = "";
        while(!is_palindrome(temp)){
            add+=temp.back();
            temp.pop_back();
        }
        return add+s;
    }
};
