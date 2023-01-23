#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

  int t;cin>>t;
  while(t--){
     int n;cin>>n;
  string s;cin>>s;

  int one=0,zer=0;
  int ans=0;

  for (int i = 0; i<n; i++) {
    if(s[i]=='0') {
      zer++;
    }else{
      one++;
    }
  }

  if(zer==0 || one==0){
    ans=1;
  }else{
    if(zer==one){
      ans=2*one;
    }

    else if(one>zer){
      ans=(2*zer)+1;
    }else{
      ans=2*one+1;
    }
  }

  cout<<ans<<endl;
  }
 
  
  return 0;
}

