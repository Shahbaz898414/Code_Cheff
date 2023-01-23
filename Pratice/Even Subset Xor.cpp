#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  int t;cin>>t;
  while(t-->0) {
  ll n,m=0;cin>>n;
    ll a[n];

    if(n==1){
      cout<<6<<endl;
    }else{
      
      for (ll i = 2; i<=pow(2,20); i++) {
        int d=__builtin_popcount(i);
       
        if(d%2==0){
         cout<<i<<" ";
           m++;
        }
         if(m==n){
            break;
         }
      }

    }

  }
    
    return 0;
}