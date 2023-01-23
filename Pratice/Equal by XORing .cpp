#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

int main() {

    vector<ll> v(int(1e7), 1);
    for (ll i = 2; i <= int(1e6); i++) {
        v[i] = (i * v[i - 1] + i + v[i - 1]) % mod;
    }
	
	int t;cin >> t;
	while(t--){
    ll a,b,n; cin>>a>>b>>n;
    n--;

      ll x=a^b;
      ll cnt = -1;
      if(x == 0){
        cnt = 0;
      }
      else if(x <= n){
        cnt = 1;
      }else {
        int xl=0,nl=0;

        while(x>0){
          xl++;
          x/=2;
        }

        while(n>0){
          nl++;
          n/=2;
        }

        if(nl==xl) cnt=2;
      }

      cout<<cnt<<endl;
	   
	}
	return 0;
}
