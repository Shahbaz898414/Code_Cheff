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
    ll v1,t1,v2,t2,v3,t3;
        cin >> v1 >> t1 >> v2 >> t2 >> v3 >> t3;
        if (t1<t3 and t2<t3) cout << "NO" << endl;
        else if (t1>t3 and t2>t3) cout << "NO" << endl;
        else if (t1==t3) {
            if (v1>=v3) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if (t2==t3) {
            if (v2>=v3) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if (v1*(t2-t1)>=v3*(t2-t3) and v2*(t2-t1)>=v3*(t3-t1)) cout << "YES" << endl;
        else cout << "NO" << endl;

    
    
  }
  return 0;
}