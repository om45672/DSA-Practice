class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
    void solve(vector<int>& nums, int idx){
        if(idx==nums.size()){
            ans.push_back(subset);
            return ;
        }
        subset.push_back(nums[idx]);
        solve(nums,idx+1);
        subset.pop_back();
        solve(nums,idx+1);
    }
};
