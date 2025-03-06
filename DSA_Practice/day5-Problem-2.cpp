class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<int,int> mpp;
        for(auto& it:s){
            if(mpp[it]==0){
                mpp[it]++;
            }
            else mpp[it]--;
        }
        int cnt = 0;
        for(auto& it:mpp){
            if(it.second!=0) cnt++;
        }
        if(cnt==0) return n;
        return n-cnt+1;
    }
};
