class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low =0, high = m-1;
        while(low<=high){
            int maxR = 0;
            int mid = (low+high)>>1;
            for(int row = 0;row<n;row++){
                if(mat[row][mid]>mat[maxR][mid]) maxR = row;
            }
            int left = mid==0?-1:mat[maxR][mid-1];
            int right = mid==m-1?-1:mat[maxR][mid+1];
            if(mat[maxR][mid]>left && mat[maxR][mid]>right){
                return {maxR,mid};
            }
            else if(mat[maxR][mid]>right){
                high = mid-1;
            }
            else low = mid+1;
        }
        return {-1,-1};
    }
};
