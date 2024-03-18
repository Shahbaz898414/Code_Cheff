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

    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> v[i][j];
      }
    }
  }

  return 0;
}
