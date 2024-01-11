#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;

void solve()
{
  int n = 0, m = 0, k = 0, x = 0, cnt = 0, sum = 0, ans = 0;

  cin >> n >> m;

  if (n == 1)
  {
    if (m == 0)
      cout << 1 << endl;
    else
      cout << -1 << endl;

    return;
  }

  if (m >= n - 1)
  {
    cout << -1 << endl;
    return;
  }

  vector<int> cont;

  for (int i = n; i > m + 1; i--) {

    cont.push_back(i);
  }

  for (int i = 1; i <= m + 1; i++)
  {
    
    cont.push_back(i);
  }

  for (auto it:cont)
  {
    cout << it << " ";
  }

  cout << endl;


}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    solve();
  }
  return 0;
}
