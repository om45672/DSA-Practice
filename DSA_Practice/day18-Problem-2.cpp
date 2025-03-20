class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        string mini=strs[0];
        for(auto& it:strs){
            if(it.length()<mini.length()) mini = it;
        }
        int cnt = 0;
        for(int i=0;i<mini.length();i++){
                for(auto& it:strs){
                    if(it[i]!=mini[i]) return mini.substr(0,i);
                }
        }
        return mini;
    }
};
