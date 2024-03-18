#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int MOD = 1000000007;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> v[i][j];
      }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < m; j++)
      {
        int range = min(min(m - j - 1, j), min(n - i - 1, i));
        for (int k = 0; k <= range; k++)
        {
          if (v[i - k][j] == v[i + k][j] and v[i][j - k] == v[i][j + k])
          {
            ans++;
          }
          else
            break;
        }
      }
    }

    
  }

  return 0;
}
