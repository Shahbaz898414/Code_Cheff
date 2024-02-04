#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    vector<int> v;

    int c = 0, ch = 0, mx = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '0')
        c++;

      else
      {
        v.push_back(c);
        c = 0;
      }
    }
    v.push_back(c);

    for (int i = 1; i < v.size(); i++)
    {
      mx = (v[i] % x) + (v[i - 1] % x) + 1;
      if (mx >= x)
        ch = 1;
    }
    if (v.size() == 1)
    {
      int g = v[0] / x;
      cout << g;
    }
    else
    {
      int ans = 0;
      for (int i = 0; i < v.size(); i++)
      {
        ans = ans + (v[i] / x);
      }
      if (ch == 1)
        ans++;
      cout << ans;
    }

    cout << endl;
  }

  return 0;
}
