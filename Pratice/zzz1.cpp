#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

bool binary_search(ll mian, vector<ll> &fjng, ll g)
{
  ll ans = 0;
  for (int i = 0; i < fjng.size(); i++)
  {
    if (fjng[i] < mian)
      ans += mian - fjng[i];
    else
      break;
  }
  return ans <= g;
}

int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n;

    ll arr[n];
    ll o = 0, n = 0;
    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin >> arr[i];
      if (arr[i] == 1)
        o++;
      else
        n++;
    }
  }

  return 0;
}