#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;cin>>t;
  while(t--){
    ll n,m;
    cin>>n;

      int a[n];
	    for(int i=1; i<n; i+=2){	
        a[i] = (i+1)/2;	 
        // cout<<a[i]<<" ";   
      }
      // cout<<endl;
	    for(int i=0; i<n; i+=2) {	        
        a[i] = n - i/2;	 
        // cout<<a[i]<<" ";  
      }
	    
	    for(int i=0; i<n; i++){	
        cout<<a[i]<<" ";
      }
	    cout<<endl;
   
    
    

   
  }
  return 0;
}