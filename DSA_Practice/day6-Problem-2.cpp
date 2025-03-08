class Solution {
  public:
    
    vector<int> pge(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
            if(!st.empty()) ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
  
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> hash = pge(arr);
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            ans[i] = (i-hash[i]);
        }
        return ans;
    }
};
