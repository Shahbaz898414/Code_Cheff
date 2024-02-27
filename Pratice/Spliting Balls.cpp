
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// #define MOD 998244353
const int MOD = 1e9 + 7;

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

#define MAX 100010

ll a[MAX], b[MAX];

int length[MAX];

bool Check(int &t1, int &t2)
{
  return a[t1] * b[t2] > b[t1] * a[t2];
}

vector<ll> f(1000005, 0ll);

void cmp_factorial()
{
  f[0] = f[1] = 1;
  for (ll i = 2; i < 1000005; i++)
  {
    f[i] = (f[i - 1] * i) % MOD;
  }
}

int main()
{
  ll t, n, i, j, k;
  cmp_factorial();
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll sum = 0ll;
    for (i = 0; i < n; i++)
    {
      cin >> k;
      sum = (sum + f[k]) % MOD;
    }
    cout << sum % MOD << "\n";
  }
  return 0;
}



/*

Precomputing and storing the values of factorials till 10^6+5 values, to avoid recomputation for every a[i].This comes under memoization technique of DP.

*/