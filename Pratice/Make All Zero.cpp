#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;

void solve()
{


 int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<int> _min;
    _min.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (a[i]<=_min.back()){
            _min.push_back(a[i]);
        }
    }
    int ans = n;
    reverse(_min.begin(),_min.end());
    for (int i = 0; i < _min.size(); i++) {
        // use n-1-i type2 and _min[i] type1 moves
        ans = min(ans, n-i-1+_min[i]);
    }
    cout<<ans<<endl;

  


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
