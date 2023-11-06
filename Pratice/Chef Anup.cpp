#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    vector<ll> ar(n + 1);

    for (ll i = 1; i <= n; i++)
    {
      cin >> ar[i];
    }

    ll mx = *max_element(ar.begin() + 1, ar.end());

    vector<ll> pos;

    for (ll i = 1; i <= n; i++)
    {
      if (ar[i] == mx)
        pos.push_back(i);
    }

    pos.push_back(pos[0] + n);

    for (auto it : pos)
    {
      cout << it << " ";
    }

    cout << endl;

    ll ans = 0;
    ll sz = n / 2;

    for (ll i = 1; i < pos.size(); i++)
      ans += max(0LL, pos[i] - pos[i - 1] - sz);

    cout << ans << endl;
  }
  return 0;
}

