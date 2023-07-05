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
  {
    if (it.second > 1)
      cnt++;
  }

  return cnt;
}

int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    ll n;cin>>n;

    set<ll> s;

    ll e=0,o=0;

    while(n--) {
      ll x;cin>>x;
    }
       
  }
  return 0;
}