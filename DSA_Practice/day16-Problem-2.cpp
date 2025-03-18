class Solution {
  public:
    int upperBound(vector<int> arr,int x,int n){
        int low = 0;
        int high = n;
        int ans = n;
        while(high>=low){
            int mid = (low+high)>>1;
            if(arr[mid]>x){
                ans = mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    int blackbox(vector<vector<int>> mat,int mid, int n,int m){
        int count = 0;
        for(int i = 0;i<n;i++){
            count+=upperBound(mat[i],mid,m);
        }
        return count;
    }
    
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = INT_MAX,high = INT_MIN;
        for(int i = 0;i<n;i++){
            low = min(low,mat[i][0]);
            high = max(high,mat[i][m-1]);
        }
        while(high>=low){
            int mid = (low+high)>>1;
            int smallerEquals = blackbox(mat,mid,n,m);
            if(smallerEquals<=(m*n)/2){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};
