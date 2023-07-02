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

bool myCompare(pair<int,int> p1, pair<int,int> p2){
    if(p1.first!=p2.first){
        return (p1.first > p2.first);
    }
    else return (p1.second > p2.second);
}

int main() {
  int t = 1;cin >> t;
  while (t--) {
    ll n,m;
        cin>>n>>m;
        ll ans=0;
        ll lcm=1;
        vector<pair<ll,ll>> v(m);
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            v[i]=make_pair(x,y);
        }

         sort(v.begin(), v.end(), myCompare);

        //  for(auto it:v){
        //   cout<<it.first<<" "<<it.second<<endl;
        //  }
        for(int i=0;i<m;i++){
            if(lcm%(v[i].second)==0){
                continue;
            }
            ll tmp_lcm = (lcm*v[i].second)/(__gcd(lcm,v[i].second));
            ans += v[i].first * (n/lcm - n/tmp_lcm);
            lcm = tmp_lcm;
        }
        cout<<ans<<endl;
  }

  return 0;
}

/*

PROBLEM
Given an array $A$ of length $N$ filled with $0$, you can apply given $M$ operations in any order so as to maximize the sum of integers in the array $A$ after all operations are applied.
An operation is described by two integers $(x_i, y_i)$. In one operation, choose a subset of indices $S$ such that

$1 \leq j \leq N$
$j \bmod y_i \neq 0$

$A_j = 0$
Then update $A_j = x_i$ for all $j \in S$

*/


