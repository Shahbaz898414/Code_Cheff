#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;

  while (t--) {
    ll n,q;cin>>n>>q;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
      cin>>arr[i];
    }
    

    sort(arr.begin(),arr.end());

    vector<ll>  cnt(n);

    for (int i = 0; i <n; i++) {
      ll x=n-i-1;
      cnt[i]=(x*(x-1))/2;
    }

    // for(auto it:cnt){
    //   cout<<it<<" ";
    // }

    // cout<<endl;

    for (int i = 1; i <n; i++)
    {
      /* code */
      cnt[i]+=cnt[i-1];
    }

    // for(auto it:cnt){
    //   cout<<it<<" ";
    // }

    // cout<<endl;
    
    while(q--){
      ll k;cin>>k;
      int pos=lower_bound(cnt.begin(),cnt.end(),k)-cnt.begin();
      cout<<arr[pos]<<endl;
    }
    
    

  }

  return 0;
}