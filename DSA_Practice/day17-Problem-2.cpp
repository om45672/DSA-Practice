class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        stack<char> st;
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push('(');
                if(st.size()>1) ans+='(';
            }
            else{
                if(st.size()>1)
                ans+=')';
                st.pop();
            }
        }
        return ans;
    }
};
