#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;




void solve() {


  int n; cin >> n;


  int x = sqrtl(n);


  if (n == 2) {
    cout << 0 << endl;
    return;
  }


  if (n % 2) {
    cout << (x + 1) / 2 << endl;
    return;
  }


  cout << x / 2 << endl;


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



