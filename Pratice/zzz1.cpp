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
    ll mi = 0;
    cin >> n >> k;
    vector<ll> fjng(n);
    for (auto &it : fjng)
      cin >> it;

    sort(fjng.begin(), fjng.end());

    ll left = 0, right = 1e10, fhng;
    while (right - left > 1)
    {
      fhng = (right + left) / 2;
      if (binary_search(fhng, fjng, k))
        left = fhng;
      else
        right = fhng - 1;
    }

    if (binary_search(right, fjng, k))
      mi = right;
    else
      mi = left;

    for (int i = 0; i < n; i++)
    {
      if (fjng[i] < mi)
      {
        k -= (mi - fjng[i]);
        fjng[i] = mi;
      }
    }

    for (int i = 0; i < k; i++)
      fjng[i]++;

    ll vain = 0;
    for (int i = 0; i < n; i++)
      vain = (vain + fjng[i]) % mod;

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
      vain = (vain - fjng[i] + mod) % mod;
      cnt = (cnt + fjng[i] * vain) % mod;
    }

    cout << cnt << '\n';
  }

  return 0;
}