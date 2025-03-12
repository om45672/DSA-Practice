class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m =  matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            int p1=0,p2=m-1;
            while(p1<p2){
                swap(matrix[i][p1],matrix[i][p2]);
                p1++;p2--;
            }
        }
    }
};
