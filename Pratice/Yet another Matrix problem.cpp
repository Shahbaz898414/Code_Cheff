#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

const int inf = 1ll << 60;

int modInverse(int A, int M = MOD)
{
  int m0 = M;
  int y = 0, x = 1;
  if (M == 1)
    return 0;
  while (A > 1)
  {
    int q = A / M;
    int t = M;
    M = A % M, A = t;
    t = y;
    y = x - q * y;
    x = t;
  }
  if (x < 0)
    x += m0;
  return x;
}

void solve()
{

  int n;
  cin >> n;

  if (n == 2)
  {
    cout << -1 << endl;
    return;
  }

  vector<vector<int>> ans(n, vector<int>(n));

  if (n % 2)
  {
    for (int i = 0, k = 1; i < n; i++)
    {
      for (int j = 0; j < n; j++)
        ans[i][j] = k++;
    }

    for (int j = 1; j < n; j += 2)
      swap(ans[1][j], ans[1][j + 1]);


    // for (int i = 0; i < n; i++)
    // {
    //   for (int j = 0; j < n; j++)
    //     cout<<ans[i][j]<<" ";

    //     cout<<endl;
    // }


  }
  else
  {
    int k = 1;
    for (int i = 0; i < n ; i++)
    {
      for (int j = 0; j < n; j++)
        ans[i][j] = k++;
    }

    for (int j = 1; j < n - 1; j += 2)
      swap(ans[1][j], ans[1][j + 1]);

    // for (int i = 0; i < n; i++)
    //   ans[i][n - 1] = k++;

    // for (int j = n - 2; j >= 0; j--)
    //   ans[n - 1][j] = k++;
     swap(ans[n-2][0], ans[n-2][1]);

  }

  for (auto e : ans)
  {
    for (auto x : e)
      cout << x << " ";
    cout << "\n";
  }


}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
