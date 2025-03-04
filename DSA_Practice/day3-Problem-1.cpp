class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& it: image){
            reverse(it.begin(),it.end());
            for(auto&itt :it){
                if(itt==0) itt=1;
                else itt=0;
            }
        }
        return image;
    }
};
