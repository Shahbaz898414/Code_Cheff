#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

vector<vector<P>> graph;

signed main()
{
  ll t;
  cin >> t;

  while (t--)
  {

    int n;
    cin >> n;

    if (n % 2 == 0)
    {

      for (int i = 1; i <= n / 2; i++)
      {
        cout << i << " " << n - i + 1 << " ";
      }
    }
    else
    {

      for (int i = 1; i <= n / 2; i++)
      {
        cout << i << " " << n - i << " ";
      }

      cout << n;
    }
    cout << endl;
  }

  return 0;
}
