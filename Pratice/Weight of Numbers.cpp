
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define MOD 998244353
// const int MOD = 1e9 + 7;

ll expo(ll a, ll b, ll mod)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return res;
}

#define MAX 100010

ll a[MAX], b[MAX];

int length[MAX];

bool Check(int &t1, int &t2)
{
  return a[t1] * b[t2] > b[t1] * a[t2];
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n,w;
    cin >> n>>w;
    ll k=0;
    for (ll i = 0; i < n; i++)
    {
      /* code */
      if(i-w>0 and w-i<9) k++;
    }
    
   


  }

  return 0;
}
