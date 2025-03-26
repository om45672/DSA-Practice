class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<pair<int,int>> hash(26,{-1,-1});
        for(int i=0;i<n;i++){
            if(hash[s[i]-'a'].first==-1){
                hash[s[i]-'a'].first = i;
                hash[s[i]-'a'].second = i;
            }
            else hash[s[i]-'a'].second = i;
        }
        vector<pair<int,int>> arr;
        for(auto& it:hash){
            if(it.second!=0) arr.push_back(it);
        }
        vector<pair<int,int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(ans.empty() || arr[i].first>ans.back().second){
                ans.push_back(arr[i]);
            }
            else{
                ans.back().second = max(ans.back().second,arr[i].second);
            }
        }
        vector<int> final_ans;
        for(auto& it: ans){
            final_ans.push_back(it.second-it.first+1);
        }
        return final_ans;
    }
};
