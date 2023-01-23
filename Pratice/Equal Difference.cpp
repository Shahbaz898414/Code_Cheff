#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;

  while(t-->0){


    ll n,cnt=1,sum=0;cin>>n;
  
     ll maa=INT_MIN;
     

      map<ll ,ll> ma;

      vector<ll> v;

      for (int i = 0; i < n; i++) {
        
        int x;cin>>x;

        ma[x]++;
      }

      if(n<=2){
        cout<<0<<endl;

      }else{
        for(auto it:ma){
          maa=max(maa,it.second);
        }

        if(maa==1){
          cout<<n-2<<endl;
        }else{
          cout<<n-maa<<endl;
        }
      } 
  }

  return 0;
}