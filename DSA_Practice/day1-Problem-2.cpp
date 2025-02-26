class Solution {
    public:
      using ll = long long;
      ll value(stack<ll>& st){
          ll ans = 0;
          for(int i=0;i<32;i++){
              ans+=(st.top()<<i);
              st.pop();
          }
          return ans;
      }
      long long reversedBits(long long x) {
          if(x==0) return 0;
          
          stack<ll> st;
          for(int i=0;i<32;i++){
              st.push(x&1);
              x>>=1;
          }
          return value(st);
      }
  };
