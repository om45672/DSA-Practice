class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int mini = arr[0];
        int low = 0;
        int high = n-1;
        while(high>=low){
            int mid = low + (high-low)/2;
            if(arr[low]<=arr[mid]){
                mini = min(mini,arr[low]);
                low = mid+1;
            }
            else{
                mini = min(mini,arr[mid]);
                high = mid-1;
            }
        }
        return mini;
    }
    
};
