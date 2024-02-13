
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// #define MOD 998244353
const int m = 1e9 + 7;

ll binexp(ll a, ll b, ll m)
{
  ll result = 1;

  while (b > 0)
  {
    if (b & 1)
      result = (result * 1LL * a) % m;

    a = (a * 1LL * a) % m;

    b >>= 1;
  }

  return result;
}

int main()
{
  int t;
  cin >> t;

  while (t--) {


    ll n = 0, v = 0; cin >> n;


    vector<int> a(3, 0);


    vector<ll> arr(n + 1);


    for (ll i = 0; i < n + 1; i++) cin >> arr[i];
    

    for (ll i = 18; i >= 0; i--) {


      if ((1 << i) > n) continue;


      for(auto it:a) {
        cout<<it<< " ";
      }


      cout<<endl;


      sort(a.begin(), a.end());

     


      int diff = (arr[1 << i] - arr[0]) / (1 << i);


      cout<<(1<<i)<<" "<<i<<" diff "<<diff<<" "<<arr[1<<i] <<endl;


      cout<<endl;


      if (diff == -3) {


        a[0] ^= (1 << i);


        a[1] ^= (1 << i);


        a[2] ^= (1 << i);


      }


      else if (diff == 1) a[0] ^= (1 << i);


      else if (diff == -1) {
        a[0] ^= (1 << i);
        a[1] ^= (1 << i);
      }


    }


    cout<<endl;


    cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';


  }



  return 0;


}


