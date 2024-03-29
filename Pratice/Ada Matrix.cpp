
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// #define MOD 998244353
const int MOD = 1e9 + 7;

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
    int n, flag = 0, flag2 = 0, count = 0;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        cin >> v[i][j];
    }
    if (v[0][1] != 2)
    {
      flag = 1;
      count++;
    }
    for (int i = 2; i < n; i++)
    {
      if (flag == 0 && i + 1 != v[0][i])
      {
        count += 2;
        flag = 1;
      }

      if (i + 1 != v[0][i])
        flag = 1;

      else
        flag = 0;
    }
    cout << count << endl;
  }
  return 0;
}



/*

First i have checked the first value is in its position or not if not then we have to make it correct so we need 1 operation if reset all are also in wrong position then also only 1 operation required.If previous values are in right position and then current value is in wrong position then we need 2 operation one for transposing previous submatrix and another for transposing the current submatrix.

*/