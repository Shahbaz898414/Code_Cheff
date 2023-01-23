#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

int main() {
	
	int t;cin >> t;
	while(t--){
   ll n; cin >> n;
      ll a[n]; 
      ll b[n]; 
      ll sum=0;
      for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n;i++) cin >> b[i];
      ll odda = 0, oddb = 0;
      for(int i=0;i<n;i++){
        if(a[i]%2==1) odda++;
        if(b[i]%2==1) oddb++;
        sum += a[i] + b[i];
      }
      cout << (sum - abs(odda-oddb))/2 << endl;

    
	   
	}
	return 0;
}
