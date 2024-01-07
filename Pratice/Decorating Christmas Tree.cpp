#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    ll n, x, y;
    cin >> n >> x >> y;

    // if(x>=(2*n)){
    //   cout<<"YES"<<endl;
    // }else {

    //   if(x<n){
    //     cout<<"NO"<<endl;
    //   }else if(x==n){
    //     int m=y/3;
    //     if(m==n){
    //       cout<<"YES"<<endl;

    //     }else cout<<"NO"<<endl;
    //   }
    //   else{
    //      int m=y/3;

    //     x=x-m;
    //     n=n-m;

    //     // cout<<m<<" "<<n<<" "<<x<<" ";

    //     if(x>=(2*n)){
    //       cout<<"YES"<<endl;
    //     }else cout<<"NO"<<endl;
    //   }

    // }

    if (n > x)
    {
      cout << "NO\n";
    }
    else
    {
      x += (y / 3);
      if (n * 2 <= x)
        cout << "yes\n";
      else
        cout << "no\n";
    }
  }
  return 0;
}
