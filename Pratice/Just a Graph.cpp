#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int MOD = 1000000007;




int main()
{

  ll t;cin>>t;

  while(t--){
    ll n;cin>>n;

    vector<ll>  arr(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }

    vector<ll>  x(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      x[i]=arr[i]-(i+1);
    }

    bool fl=1;

    for (ll i = 1; i < n; i++)
    {
      /* code */
      if(x[i]!=x[0]){
        fl=0;
        break;
      }
    }

    if(fl)  cout<<n<<endl;
    else cout<<1<<endl;
    
    
    
  }

 
  return 0;
}

