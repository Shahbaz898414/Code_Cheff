#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

  int t;
  cin >> t;

  while (t--) {

      ll n,k,l; cin >> n>>k>>l;
      l--;

      vector<ll>  a(n);

      for (ll i=n-1;i>=0;--i,l/=k)
      {
        /* code */
        // cout<<l<<" ";
        a[i]=(l)%k+1;
      }
      

      // cout<<endl;

      for(auto it:a)  cout<<it<<" ";


      cout<<endl;

    
  }
  return 0;
}

