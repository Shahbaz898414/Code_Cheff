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
  while (t--) {
   int n,c1=0,c2=0,sum=0;
		cin>>n;
		vector<ll>  v(n);

    for (ll i = 0; i < n; i++) {
      cin>>v[i];
    }
    

  }
  return 0;
}