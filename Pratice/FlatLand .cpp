#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int cnt=0;
    while(n>0) {
      int a=sqrt(n);
      cout<<a<<endl;
      n=n-a*a;
      // cout<<n<<endl;
      cnt++;
    }

    // cout<<cnt<<endl;
 
  }
 
  
  return 0;
}

