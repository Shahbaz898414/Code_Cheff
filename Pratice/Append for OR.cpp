#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--){
    ll n,m,k;
    cin>>n>>m;

      int a[n];

      int x=0;
	   for (int i = 0; i < n; i++)
     {
      
      cin>>a[i];

     }

     for (int i = 0; i <n; i++)
     {
      
      x=x|a[i];
     }
     bool fl=false;

     if(x==m) cout<<0<<endl;
     else {
      for (int i = 0; i <=m; i++)
      {
        
        if((x|i)==m){
          k=i;
          // cout<<i<<endl;
          fl=true;
          break;
        }
      }

      if(fl) cout<<k<<endl;
      else cout<<-1<<endl;


      
     }

    

  
     
     
   
    
    

   
  }
  return 0;
}