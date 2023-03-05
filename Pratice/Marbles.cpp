<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;cin>>t;

  while(t--){
    ll n,m;
    cin>>n>>m;
    // string s,p;
    // cin>>s>>p;
    ll a[n],min=100000,sum=1;

    if(n==m){
      cout<<1<<endl;
    }else {
      for (int i =1; i <m; i++) {
        
        sum=sum*(n-m+i)/i;
      }
      

      cout<<sum<<endl;

    }


    

   
  }
  return 0;
=======
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;cin>>t;

  while(t--){
    ll n,m;
    cin>>n>>m;
    // string s,p;
    // cin>>s>>p;
    ll a[n],min=100000,sum=1;

    if(n==m){
      cout<<1<<endl;
    }else {
      for (int i =1; i <m; i++) {
        
        sum=sum*(n-m+i)/i;
      }
      

      cout<<sum<<endl;

    }


    

   
  }
  return 0;
>>>>>>> origin/main
}