
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

#define MAX 100010

ll a[MAX], b[MAX];

int length[MAX];

bool Check(int &t1, int &t2)
{
  return a[t1] * b[t2] > b[t1] * a[t2];
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> v(2e3 + 10);
    for (int i = 0; i < n; i++)
    {
      int ai;
      cin >> ai;
      v[1e3 - ai]++;
    }
    ll ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
      for (int j = i; j < v.size(); j++)
      {
        if (i == j)
        {
          ans += (v[i] * (v[i] - 1) / 2);
        }
        else if ((i + j) % 2 == 0 and v[(i + j) / 2])
        {
          ans += v[i] * v[j];
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}
