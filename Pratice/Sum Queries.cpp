
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

void solve(long long int n)
{
  long long int q;
  cin >> q;
  if (q < n + 1)
  {
    cout << 0 << endl;
    return;
  }
  else
  {

    cout << (n - abs(2 * n + 1 - q)) << endl;
  }
}

int main()
{
  long long int t, n;
  cin >> n >> t;
  while (t--)
  {
    solve(n);
  }

  return 0;
}



/*

The idea behind this formula is to notice the symmetry between the valuies from n+1 to 3n. 2n+1 is the middle value ( as for example if we had n=3 {1,2,3} {4,5,6} we can get it via 3 pairs, {1,6} {2,5} {3,4} and from here we notice that n and n+1 will yield that value for any n) and from there we check how far our desired value is from the middle value and for each unit of difference between the desired value q that we go, it appears 1 unit less in C. Thus, that's how you derive the formula and solve the problem!


*/