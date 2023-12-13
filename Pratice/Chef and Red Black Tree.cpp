#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll parent(ll x, vector<ll> &par)
{
  if (x == par[x])
    return x;
  return par[x] = parent(par[x], par);
}

void Union(ll x, ll y, vector<ll> &sz, vector<ll> &flag, vector<ll> &par)
{
  if (x == y)
    return;
  if (sz[y] > sz[x])
    swap(x, y);
  flag[x] |= flag[y];
  par[y] = x;
  sz[x] += sz[y];
}

void MST_Kruskal(vector<pair<ll, pair<ll, ll>>> &graph, string s)
{
  ll ans = 0;
  sort(graph.begin(), graph.end());
  ll n = s.size() + 1;
  vector<ll> sz(n), flag(n), par(n);

  for (int i = 1; i < n; i++)
  {
    par[i] = i;
    sz[i] = 1;
    if (s[i - 1] == 'R')
      flag[i] = 1;
  }

  for (auto it : graph)
  {
    ll wt = it.first;
    ll x = parent(it.second.first, par);
    ll y = parent(it.second.second, par);

    if (wt <= 0)
    {
      ans += wt;
      Union(x, y, sz, flag, par);
    }
    else if (x != y)
    {
      if (flag[x] == 0 || flag[y] == 0)
      {
        Union(x, y, sz, flag, par);
        ans += wt;
      }
    }
  }

  cout << ans << endl;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    vector<pair<ll, pair<ll, ll>>> graph;

    for (ll i = 0; i < m; i++)
    {
      ll x, y, z;
      cin >> x >> y >> z;

      graph.push_back({z, {x, y}});
    }

    MST_Kruskal(graph, s);
  }

  return 0;
}


/*

Today was my 60th day out of the 100 days  hard challenge.
So today, I solved 5 problems .


1. Houses and Restaurants (https://www.codechef.com/problems/RHOUSE).


2. D - Money in Hand  (https://atcoder.jp/contests/abc286/tasks/abc286_d).


3. E - Dice Product 3 (https://atcoder.jp/contests/abc300/tasks/abc300_e)


4. C - Jumping Takahashi (https://atcoder.jp/contests/abc240/tasks/abc240_c).


5. C - Choose Elements  (https://atcoder.jp/contests/abc245/tasks/abc245_c).


#100dayschallenge #challenge #consistency #Cp #lessons  #learning
#competitiveprogramming



*/