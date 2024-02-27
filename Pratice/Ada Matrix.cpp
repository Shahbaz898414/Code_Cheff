
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

void solve(long long int n)
{
  long long int q;
  cin >> q;
  if (q < n + 1)
  {
    cout << 0 << endl;
    return;
  }
  else
  {

    cout << (n - abs(2 * n + 1 - q)) << endl;
  }
}

int main()
{
  long long int t, n;
  cin >> n >> t;
  while (t--)
  {
    solve(n);
  }

  return 0;
}


