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
       ll n; cin >> n;
       cout<<v[n]<<endl;
	}
	return 0;
}
