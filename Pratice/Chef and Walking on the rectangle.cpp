
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

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, k;
    cin >> n >> m >> k;
    if (n == 1 && m > 2)
    {
      cout << k << endl;
    }
    if (n > 2 && m == 1)
    {
      cout << k << endl;
    }
    if (n == 1 && m <= 2)
    {
      cout << 0 << endl;
      ;
    }
    if (n <= 2 && m == 1)
    {
      cout << 0 << endl;
    }

    if (n >= 2 && m >= 2)
    {
      if (k % 2 == 0)
      {
        cout << k / 2 << endl;
      }
      else
      {
        cout << (k / 2) + 1 << endl;
      }
    }
  }
  return 0;
}
