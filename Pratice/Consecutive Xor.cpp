#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){

  int t;cin>>t;
  while(t--) {
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum^arr[i];
    }
    
    for( ll i=0;i<n-1;i++ )
    {
        if(arr[i]==sum)
        continue;
        ll x=arr[i]^sum;
        arr[i]=sum;
        arr[i+1]=arr[i+1]^x;
        
    }
    if(arr[n-1]==sum)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    

  
	    
  }
  
  return 0;
}