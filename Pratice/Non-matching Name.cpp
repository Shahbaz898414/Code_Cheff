#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
vector<vector<P>> graph;

signed main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    unordered_set<char> a;
    int s_a, s_b;
    cin >> s_a >> s_b;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; s1[i]; i++)
    {
      a.insert(s1[i]);
    }
    // cout << a.size() << " ";
    for (int i = 0; s2[i]; i++)
    {
      a.insert(s2[i]);
    }
    // cout << a.size();
    if (a.size() < 26)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
