#define ll long long
const int MOD = 1e9 + 7;
class Solution {
public:
    int countGoodNumbers(ll n) {
        ll odd = 0, even = 0;
        if (n & 1) {
            even = (n >> 1) + 1;
            odd = n - even;
        } else {
            even = n >> 1;
            odd = n - even;
        }
        ll ans = 1LL * power(5, even) * power(4, odd);
        return ans % MOD;
    }
    ll power(ll a, ll b, ll m = MOD) {
        ll res = 1;
        while (b) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    }
};
