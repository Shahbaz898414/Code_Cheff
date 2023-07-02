#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


bool binary_search(ll mian, vector<ll> &fjng, ll g) {
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

bool myCompare(pair<int,int> p1, pair<int,int> p2){
    if(p1.first!=p2.first){
        return (p1.first > p2.first);
    }
    else return (p1.second > p2.second);
}

int main() {
  int t = 1;cin >> t;
  while (t--) {
     ll n; cin >> n;
        ll ans = -1;
        for (int i = 2;i*i<=n;i++) {
            if (n%i==0) {
                ans=n/i*(i+1);
                break;
            }
        }
        if (ans==-1) cout << n+1 << endl;
        else cout << ans << endl;
  }

  return 0;
}










