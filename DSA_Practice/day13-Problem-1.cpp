#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int k) {
       int low = 0;
       int high = n-1;
       int maxi1 = -1,maxi2 = -1;
       while(low<=high){
       int mid = low+ (high-low)/2;
           if(arr[mid] == k) return {arr[mid],arr[mid]};
           else if( arr[mid]<k){
               low = mid+1;
               maxi1 = arr[mid];
               
           }
           else{
               high =mid-1;
               maxi2 = arr[mid];
           }
       }
       return {maxi1,maxi2};
}
