#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int32_t main() {
	int t; cin>>t;
	while(t--){

    ll n;cin>>n;

    int p = log2(n);

    // cout<<p<<endl;
    int power = pow(2,p);
    // cout<<power<<" pow"<<endl;
    int x = power / 2;
    // cout<<x<<" x"<<endl;
    int y = n - power + 1;
    // cout<<y<<" y"<<endl;
    if (x > y)
      cout << x << endl;
    else
      cout << y << endl;

	}
	return 0;
}

