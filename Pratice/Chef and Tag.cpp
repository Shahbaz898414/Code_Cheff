#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

const int inf = 1ll << 60;

int modInverse(int A, int M = MOD)
{
  int m0 = M;
  int y = 0, x = 1;
  if (M == 1)
    return 0;
  while (A > 1)
  {
    int q = A / M;
    int t = M;
    M = A % M, A = t;
    t = y;
    y = x - q * y;
    x = t;
  }
  if (x < 0)
    x += m0;
  return x;
}

void solve()
{

  int n;
  cin >> n;

  vector<vector<int>> tree(n);

  for (int i = 0; i < n - 1; i++)
  {
    int u, v;
    cin >> u >> v;

    u--;

    v--;

    tree[u].push_back(v);

    tree[v].push_back(u);
  }

  vector<int> cnt(n);
  vector<int> dis(n, 1e9);
  vector<int> ht(n, 0);

  function<void(int, int)> DFS = [&](int u, int p)
  {
    int f = 1;

    for (auto v : tree[u])
    {
      if (v == p)
        continue;

      f = 0;
      ht[v] = ht[u] + 1;
      DFS(v, u);
      dis[u] = min(dis[u], dis[v] + 1);
      cnt[u] += cnt[v];
    }

    if (f)
    {
      cnt[u] = 1;
      dis[u] = 0;
    }
  };

  DFS(0, -1);

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    if (dis[i] != 0 && dis[i] <= ht[i])
      ans = max(ans, cnt[i]);
  }

  cout << ans << "\n";
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
