#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lld long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t; cin >> t;

  while (t--) {
     int n; cin >> n;
    vector<int> xs(n), ys(n);
    for(int i=0;i<n;++i) {
        cin >> xs[i] >> ys[i];
    }
    
    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());
    
    int ans;
    if ((n&1)) {
        int mid = n/2;
        ans = 1;
    } else {
        int mid = (n+1)/2;
        ans = abs(xs[mid] - xs[mid-1] + 1) * abs(ys[mid] - ys[mid-1] + 1);
    }
    
    cout << ans << '\n';
    



  }

  return 0;
}