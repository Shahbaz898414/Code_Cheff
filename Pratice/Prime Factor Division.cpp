#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lld long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;

    bool fl = true;

    while (k > 1)
    {
      ll g = __gcd(n, k);

      if (g == 1)
      {
        fl = false;
        break;
      }

      k = k / g;
    }

    if (fl)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}