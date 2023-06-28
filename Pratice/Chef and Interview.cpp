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

int main() {
  int t = 1; cin >> t;
  while (t--) {
    ll n, c1 = 0, c2 = 0, sum = 0, ans = 0, k;
    cin >> n;

    // sum += n + 1ll;
    if(n == 1ll) {
      cout<<1<<endl;
    } else {
       sum += n + 1ll;
      for(int i=2; i<=sqrt(n); i++) {
        if(i%2==0){
          if(i!=(n/i)){
            sum+=i;
            sum+=(n/i);
          }else{
            sum+=i;
          }
        }
      }

      cout<<sum<<endl;
    }

    // vector<ll> arr(n);

    // for (ll i = 0; i < n; i++) {
    //   cin>>arr[i];
    // }
  }
  return 0;
}