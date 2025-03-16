class Solution {
  public:
    int floorSqrt(int n) {
        int low = 1;
        int high = n;
        int k = 1;
        while(high>=low){
            int mid = low+(high-low)/2;
            if(mid*mid>n){
                high = mid-1;
            }
            else if(mid*mid == n){
                return mid;
            }
            else{
                k = max(k,mid);
                low = mid+1;
            }
        }
        return k;
    }
};
