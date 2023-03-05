#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--){
    ll n,m,k;
    cin>>n;

      int a[n];

     
      int cnt=n;
      int x=0;
	   for (int i = 0; i < n; i++) {
      cin>>a[i];
      a[i]=a[i]*2;

      x=x^a[i];
     }

     cout<<x<<endl;

    
  }

    

  
     
     
   
    
    

   
  
  return 0;
}