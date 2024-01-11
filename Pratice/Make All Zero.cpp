#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;

void solve()
{

  int n;
  cin >> n;


  vector<int> a(n);


  for (int i = 0; i < n; i++)
  
    cin >> a[i];
  
  vector<int> _min;


  _min.push_back(a[0]);


  for (int i = 1; i < n; i++) {

    if (a[i] <= _min.back())
      _min.push_back(a[i]);
    
  }

  // for(auto it:_min){
  //   cout<<it<<" ";
  // }

  // cout<<endl;


  /*
  9
  5 3 3 5 2 4 5 2 1
  */

 
  int ans = n;


  reverse(_min.begin(), _min.end());

  // for(auto it:_min){
  //   cout<<it<<" ";
  // }

  // cout<<endl;


  for (int i = 0; i < _min.size(); i++) {


    // cout<<n<<" "<<i<<" "<<_min[i]<<" "<<( n - i - 1 + _min[i])<<endl;


    ans = min(ans, n - i - 1 + _min[i]);


  }


  cout << ans << endl;


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
