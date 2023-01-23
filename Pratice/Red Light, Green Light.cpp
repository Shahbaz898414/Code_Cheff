#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;cin>>t;

  while(t--){
    ll n,k;
    cin>>n>>k;
    ll a[n],min=100000,sum=0;

    for (int i = 0; i <n; i++) {
      cin>>a[i];
      if(a[i]>k){
        sum++;
      }
    }

    if(sum>=1){
      cout<<sum<<endl;
    }else{
      cout<<0<<endl;
    }
    

    // for (int i = 0; i <n; i++) {
      
      
    //     sum+=a[i];
      
    // }
    
   
    // cout<<sum-min<<endl;
  }
  return 0;
}