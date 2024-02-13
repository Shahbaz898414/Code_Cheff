
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// #define MOD 998244353
const int m = 1e9 + 7;

ll binexp(ll a, ll b, ll m)
{
  ll result = 1;
  while (b > 0)
  {
    if (b & 1)
    {
      result = (result * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b >>= 1;
  }
  return result;
}

#define MAX 100010

ll a[MAX], b[MAX];

int length[MAX];

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, w;
    cin >> n >> w;
    if (w < 0 && w > 9)
    {
      cout << 0 << endl;
      continue;
    }


    ll p = 0;


    for (int i = 1; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        if ((j - i) == w)
        {
            p++;
        }
          
      }
    }

    ll diff = n - 2, result = 1;
    result = (binexp(10, diff, m) * p) % m;
    cout << result << endl;
  }

  return 0;
}
