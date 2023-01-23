#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 


int main() {

  int t;cin>>t;
  while(t-->0) {
   
    int n;cin>>n;
    int ans=0;

     int a[]={100,50,10,5,2,1};


     for (int i = 0; i <n; i++) {
       ans +=n/a[i];

       n=n-(ans*a[i]);

     }

     cout<<ans<<endl;
     

  }
    
 
    
 
    return 0;
}