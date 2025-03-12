class Solution {
public:
    int NcR(int r,int c){
        if(c==0 || c==r) return 1;
        int res = 1;
        for(int i=0;i<c;i++){
            res = res*(r-i);
            res = res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       vector<int> a;
       if(numRows>=1)
       ans.push_back({1});
       if(numRows>=2)
       ans.push_back({1,1});
       for(int i=3;i<=numRows;i++){
            a.clear();
            for(int j=1;j<=i;j++){
                int k = NcR(i-1,j-1);
                a.push_back(k);
            }
            ans.push_back(a);
       }
       return ans;
    }
};
