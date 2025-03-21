class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;
        int sum =0;
        for(int i=0;i<s.length();i++){
            sum+=mpp[s[i]];
        }
        for(int i=0;i<s.length()-1;i++){
            if(mpp[s[i]]==1 && (mpp[s[i+1]] == 5 || mpp[s[i+1]] == 10) ){
                sum-= 2;
                
            }
            if(mpp[s[i]]==10 && (mpp[s[i+1]] == 50 || mpp[s[i+1]] == 100) ){
                sum-= 20;
                
            }
            if(mpp[s[i]]==100 && (mpp[s[i+1]] == 500 || mpp[s[i+1]] == 1000) ){
                sum-= 200;
                
            }
        }
            
        return sum;
    }
};
