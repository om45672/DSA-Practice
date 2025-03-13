class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
         int n = arr.size();
       int low = 0;
       int high = n-1;
       int maxi = -1;
       while(low<=high){
       int mid = low+ (high-low)/2;
           if(arr[mid] == k) return mid;
           else if( arr[mid]<k){
               low = mid+1;
               maxi = mid;}
           else{
               high =mid-1;
           }
       }
       return maxi+1;
    }
};
