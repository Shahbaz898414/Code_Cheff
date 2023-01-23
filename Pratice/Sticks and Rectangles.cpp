#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--){

    ll n,cnt=0;cin>>n;

    ll a[n];
    
   map<ll,ll> ma;

    for (int i = 0; i < n; i++) {
      cin>>a[i];

      ma[a[i]]++;

    }

    if(n==1) {
      cout<<3<<endl;
    }else{
        

      if((n+cnt)%4!=0){
        cnt+=2;
      }

      cout<<cnt<<endl;
  
    }
	   
	}
	return 0;
}

