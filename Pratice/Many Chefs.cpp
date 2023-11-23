#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define md 1000000007

ll gcd(ll a, ll b)
{
  if (a < b)
    swap(a, b);
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll powmod(ll a, ll m, ll mod)
{
  if (m == 0)
    return 1;
  ll res = powmod(a, m / 2, mod) % mod;
  if (m & 1)
    return (((__int128_t)res * res) % mod * a) % mod;
  else
    return ((__int128_t)res * res) % mod;
}



int main() {
  int T = 1;
  cin >> T;
  while (T--)
  {
    ll a, b, n;
    cin >> a >> b >> n;
    ll y1, y2;
    y2 = abs(a - b);
    if (y2 == 0)
      cout << ((powmod(a, n, md) + powmod(b, n, md)) % md) << '\n';
    else
      cout << gcd(powmod(a, n, y2) + powmod(b, n, y2), y2) % md << '\n';
  }

  return 0;
}


/*


GCD(U,V)=GCD(U%V,V).

*/