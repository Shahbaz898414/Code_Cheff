#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--){
    ll n,m,k;
    cin>>n;

      int a[n];

       int even[250001]={0},odd[250001]={0};
      int cnt=n;
      int x=0;
	   for (int i = 0; i < n; i++) {
      cin>>a[i];
     }

     for (int i = 0; i < n; i++) {
      // int h=a[i];
      if(a[i]%2){
        odd[a[i]/4]++;
        x++;
      } else {
        even[a[i]/4]++;
      }
     }

     cnt-=x;

     ll ans;

      ans=((ll)x*(x-1))/2+((ll)cnt*(cnt-1))/2;


      for (int i = 0; i < 5; i++)
      {
        /* code */
        cout<<odd[i]<<" ";
      }

      cout<<endl;

       for (int i = 0; i < 5; i++)
      {
        /* code */
        cout<<even[i]<<" ";
      }

      cout<<endl;
      

      for (int i = 0; i < 250001; i++)
      {
        /* code */
        ans-=((ll)even[i]*(even[i]-1))/2+((ll)odd[i]*(odd[i]-1))/2;
      }


      cout<<ans<<endl;
        
  }

    

  
     
     
   
    
    

   
  
  return 0;
}