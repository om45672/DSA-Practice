class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt1=0;
        int cnt = 0;
        int n = s.length();
        for(auto& it:s){
            if(it=='(') cnt1++;
            else if(cnt1>0 && it==')') cnt1--;
            else{
                cnt++;
            }
        }
        return (cnt+cnt1);
    }
};
