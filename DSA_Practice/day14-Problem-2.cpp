class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = INT_MIN;
        for(auto it:piles) high=high>it?high:it;
        while(high>=low) {
            int mid = low+(high-low)/2;
            long long time = 0;
            for(auto it:piles) time+=it%mid==0?it/mid:it/mid+1;
            if(time<=h) high=mid-1;
            else low = mid+1;
        }
        return low;
    }
};
