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

    ll n;
    cin >> n;

    vector<ll> even, odd;

    for (int i = 1; i <= n; i++)
    {
      /* code */
      if (n % i == 0)
      {
        if (i % 2 == 0)
        {
          even.push_back(i);
        }
        else
        {
          odd.push_back(i);
        }
      }
    }

    if (even.size() == odd.size())
    {
      cout << 0 << endl;
    }
    else if (even.size() > odd.size())
    {
      cout << 1 << endl;
    }
    else
    {
      cout << -1 << endl;
    }

    // cout << n << endl;
  }

  return 0;
}
