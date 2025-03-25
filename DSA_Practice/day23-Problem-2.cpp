/* Using KMP algorithm */

class Solution {
public:
    void lps(vector<int>&  lp, string a){
        int i=0,j=1;
        while(j<a.length()){
            if(a[i]==a[j]){
                i++;
                lp[j]=i;
                j++;
            }
            else{
                if(i==0){
                    j++;
                }
                else{
                    i=lp[i-1];
                }
            }
        }
    }
    string shortestPalindrome(string s) {
        string copy = s;
        reverse(copy.begin(),copy.end());
        string a = s+'#'+copy;
        vector<int> lp(a.length(),0);
        lps(lp,a);
        int n = lp[a.length()-1];
        string temp = s.substr(n);
        reverse(temp.begin(),temp.end());
        return temp+s;
    }
};


/* 
    ALTERNATE APPROACH        
Time Limit Exceeded 125 / 126 testcases passed 
*/

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
