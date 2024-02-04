#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

   
    for (int i = 1; i <= k; i++)
    {
      cout << i << " ";
    }

   
    for (int j = k + 2; j <= n; j += 2)
    {
      cout << j << " ";
    }

   
    for (int i = k + 1; i <= n; i += 2)
    {
      cout << i << " ";
    }

    cout << endl;
  }

  return 0;
}
