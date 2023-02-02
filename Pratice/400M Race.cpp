#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
    ll n,m,k;
    cin>>n>>m>>k;

    
    int mx=min({n,m,k});

    if(mx==n) cout<<"Alice"<<endl;
    else if(mx==m) cout<<"Bob"<<endl;
    else cout<<"Charlie"<<endl;

    
  }

    

  
     
     
   
    
    

   
  
  return 0;
}