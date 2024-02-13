
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
      result = (result * 1LL * a) % m;

    a = (a * 1LL * a) % m;

    b >>= 1;
  }

  return result;
}

int main()
{
  int t; cin >> t;

  while (t--) {

    ll n = 0, v = 0;
    cin >> n >> v;


    v = (((v + 1) * v) / 2);


    if (n / v == 0) cout << -1 << endl;
    else {


      set<long long, greater<long long>> s;


      for (int i = 1; i <= sqrt(n); i++)
      {
        if (n % i == 0)
        {
          s.insert(i);
          s.insert(n / i);
        }
      }


      for (auto i : s) {
        if (i * v > n) continue;


        cout << i<<endl;

        break;

        
      }


    }
  }

  return 0;
}
