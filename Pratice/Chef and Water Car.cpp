
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// #define MOD 998244353
const int m = 1e9 + 7;

ll binexp(ll a, ll b, ll m)
{
  ll result = 1;
  while (b > 0)
  {
    if (b & 1)
    {
      result = (result * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b >>= 1;
  }
  return result;
}



int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    ll n = 0, v = 0;


    cin >> n >> v;


    ll p = n - 1, r = p - v, c = 1;


    ll maxi = p * (p + 1) / 2;


    ll mini = 0;


    if (v >= n - 1) mini = n - 1;
    else {

      mini = v - 1;

      mini += (p - v + 1) * (p - v + 2) / 2;

    }


    cout << maxi << " " << mini << endl;


  }

  return 0;
}
