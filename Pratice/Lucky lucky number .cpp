#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
  ll t;cin>>t;
  while(t-->0){

      ll n;cin>>n;
      ll cnt=0;
      for (ll  i=0; i<=n/4;i++) {
        if((n-(4*i))%7==0){
          cout<<n-(4*i)<<endl; 
          cnt++;
          break;
        }
      }

      // cout<<(cnt==1?-1:)

      if(cnt!=1)cout<<-1<<endl;

  }

  

  

  return 0;
}

