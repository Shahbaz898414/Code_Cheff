#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lld long long int

ll mx = 1e6 + 7, md = 1e9 + 7, bs = 28;
vector<ll> pw(mx), hs(mx);

void build(string s)
{
  hs[0] = s[0] - 'a' + 1;
  for (ll i = 1; i < s.size(); i++)
  {
    hs[i] = ((hs[i - 1] * bs) % md + (s[i] - 'a' + 1)) % md;
  }
}

ll gtHsh(ll i, ll j)
{
  ll ans = hs[j];
  if (i > 0)
  {
    ans = ((ans - (hs[i - 1] * pw[j - i + 1]) % md) % md + md) % md;
  }
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll t = 1, x = 1, i, j;
  pw[0] = 1;
  for (i = 1; i < mx; i++)
    pw[i] = (pw[i - 1] * bs) % md;

  cin >> t;
  while (t--)
  {
    ll i, n1, n, k, j = 0, m = 2e9, ct = 0, x = 0, y = 2e9, q;
    string s;
    cin >> s;
    n = s.size();
    build(s);

    // for (int i = 0; i <= n + 1; i++) {
    //   cout << hs[i] << " ";
    // }

    // cout << endl;

    //  for (int i = 0; i <= n + 1; i++) {
    //   cout << pw[i] << " ";
    // }

    // cout << endl;

    for (i = 1; i < n / 2; i++)
    {
      j = n / 2 - i;
      x = gtHsh(0, i - 1);
      y = gtHsh(i, 2 * i - 1);
      k = gtHsh(2 * i, 2 * i + j - 1);
      q = gtHsh(2 * i + j, n - 1);
      if (x == y && k == q)
        ct++;
    }

    cout << ct << '\n';
  }
  return 0;
}