
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define MOD 998244353
// const int MOD = 1e9 + 7;

ll expo(ll a, ll b, ll mod)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return res;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    ll n;
    cin >> n;

    ll ans = ((n * (n + 1) % MOD) * (n + 1)) % MOD;

    ans = (ans * expo(4, MOD - 2, MOD)) % MOD;

    cout << ans << endl;
  }

  return 0;
}



