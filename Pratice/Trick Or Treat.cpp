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

    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n), brr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i], arr[i] %= m;
    for (int i = 0; i < n; i++)
      cin >> brr[i], brr[i] %= m;
    map<ll, ll> mp;
    for (auto &x : arr)
      mp[x]++;
    ll ans = 0;
    for (auto &it : brr)
    {
      if (it == 0)
        ans += mp[0];
      else
        ans += mp[m - it];
    }
    cout << ans << '\n';
  }

  return 0;
}
