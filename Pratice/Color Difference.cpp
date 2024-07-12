#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long

#define eb emplace_back
#define all(x) begin(x), end(x)
const ll INF = 0xFFFFFFFFFFFFFFFLL;
#define fo(i,n)   for(i=0;i<(n);++i)
#define repA(i,j,n)   for(i=(j);i<=(n);++i)
#define repD(i,j,n)   for(i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define sz(x) ((lli)(x).size())
#define eb emplace_back
#define X first
#define Y second
using lli = long long int;
using mytype = long double;
using ii = pair<lli,lli>;
#define int long long
using vii = vector<ii>;
using vi = vector<lli>;
using namespace std;



signed main() {

  int T;
  cin >> T;

  while (T--) {
    int n, m;
    cin >> n >> m;
    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
      cin >> ar[i];
    }

    vector<pair<int, int>> rg(m);
    for (auto &x : rg)
    {
      cin >> x.first >> x.second;
      x.first--;
      x.second--;
    }

    auto b = ar;
    b.eb(-INF);
    b.eb(INF);
     sort(all(b));
     (b).erase(unique(all(b)),(b).end());

      for(auto &x:ar)
        x=lower_bound(all(b),x)-b.begin();
    
    const lli dCnt=sz(b);
    vector<vi> idx(dCnt);
    vi res(dCnt);
    for(lli i=0;i<n;i++)
        idx[ar[i]].eb(i);

    // for (auto it : b)
    // {
    //   cout << it << " ";
    // }

    // cout << endl;
  }

  return 0;
}
