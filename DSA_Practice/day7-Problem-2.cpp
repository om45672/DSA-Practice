class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i=l;i<=r;i++){
            int lt = 0;
            int rt=i-1;
            int sum = accumulate(nums.begin(),nums.begin()+i,0);
            if(sum>0)
            ans = min(ans,sum);
            while(rt+1<n){
                sum+=nums[++rt];
                sum-=nums[lt++];
                if(sum>0)
                ans = min(ans,sum);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};
