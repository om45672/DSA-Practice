class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int n =arr.size(), sum = INT_MIN;
        for(int i=0;i<n-1;i++) sum =  arr[i]+arr[i+1]>sum?arr[i]+arr[i+1]:sum;
        return sum;
    }
};
