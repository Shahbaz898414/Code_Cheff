#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
   int n,m;cin>>n>>m;

  //  cout<<(n+1)/2*(m+1)/2<<endl;

   if(m%2){
    if(n%2){
      cout<<(n+1)/2*(m+1)/2<<endl;
    }else{
      cout<<(n)/2*(m+1)/2<<endl;
    }
    
   }else{
    
    cout<<(n+1)/2*(m)/2<<endl;
   }

  }
}
