#include <bits/stdc++.h>

using namespace std;
#define ll long long

const int mod = 1e9 + 7;
const int N = 1e5 + 5;

const int N = 1e6 + 2;
int pow1(int x, int y)
{
  int res = 1;
  x = x % mod;
  if (x == 0)
    return 0;
  while (y > 0)
  {
    if (y & 1)
      res = (res * x) % mod;
    y = y >> 1;
    x = (x * x) % mod;
  }
  return res;
}

int f[N], inverse[N];
int divide(int n)
{
  return pow1(n, mod - 2);
}

int ncr(int n, int r)
{
  if (n < r)
    return 0;
  return (f[n] * ((divide(f[r]) * divide(f[n - r])) % mod)) % mod;
}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int n, m;
    cin >> n >> m;

    vector<string> v1(n);

    for (int i = 0; i < n; i++)
    {
      /* code */
      cin >> v1[i];
    }

    set<int> curr;

    int cnt1 = 0, cnt2 = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      /* code */
      cnt1 = 0;
      cnt2 = 0;

      for (auto it : curr)
      {
        if (v1[i][it] == '1')
        {
          cnt2++;
          curr.insert(it);
        }
      }

      if (cnt1 == 0)
        curr.clear();

      // for(int )
    }
  }
  return 0;
}
