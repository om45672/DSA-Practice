class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        for(auto& it : s) mpp1[it]++;
        for(auto& it: t) mpp2[it]++;
        for(auto& it: t){
            if(mpp1[it]!=mpp2[it]) return false;
        }
        return true;

    }
};
