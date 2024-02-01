#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
  // int t;
  // cin >> t;
  // while (t--)
  // {
  int n, m;
  cin >> n >> m;
  vector<int> H(n, 0);
  for (int i = 0; i < m; i++)
  {
    int p;
    cin >> p;
    p--;
    H[p] = 1;
  }
  int ans = INT_MAX;
  for (int i = 1; i < n; i++) {

    int j = 0;
    int cnt = 1;
    vector<int> Copy = H;
   
    int c = 0;

    if (Copy[0] == 1)
    {
      Copy[0] = 0;
      c++;
    }

    j = (j + i) % n;
    
    while (j != 0 && c < m)
    {
      cnt++;
      if (Copy[j] == 1)
      {
        Copy[j] = 0;
        c++;
      }
      j = (j + i) % n;
    }
    if (c == m)
      ans = min(ans, cnt);
  }


  cout << ans << endl;

  // }
  return 0;
}
