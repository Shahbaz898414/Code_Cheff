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

int maximumNumberOfStringPairs(vector<string> &v)
{
  int len = v.size();

  map<string, int> mp;

  for (int i = 0; i < len; i++)
  {
    string s = v[i];
    sort(s.begin(), s.end());
    mp[s]++;
  }

  int cnt = 0;

  for (auto it : mp)
    if (it.second > 1)
      cnt++;

  return cnt;
}

int main() {
  int t = 1;cin >> t;
  while (t--)
  {
    ll a, b, c, d, k;

    cin >> a >> b >> c >> d >> k;

    ll x = __gcd(a, b);

    ll y = __gcd(c, d);

    ll gcd = __gcd(x, y);

    x /= gcd;

    ll ans = (k / x);

    ans = ans / y;

    ans = 2ll * ans + 1;

    cout << ans << endl;
    

  }
  return 0;
}
