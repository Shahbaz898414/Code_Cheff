#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll t;
  cin >> t;
  while (t-- > 0) {
    ll n;
    cin >> n;

    ll arr[n];

    set<pair<ll, ll>> se;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      
    }
    sort(arr,arr+n);

    ll fir=arr[0],fir2=arr[1],fir3=arr[n-1];

    cout<<(abs(fir-fir2)+abs(fir2-fir3)+abs(fir3-fir))<<endl;

    
  }

  return 0;
}
