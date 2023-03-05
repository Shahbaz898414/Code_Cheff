#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  // int t;cin>>t;
  // while(t--) {
    int n,q;cin>>n;

    vector<int>  a(n);

    for (int i = 0; i < n; i++)
    {
      /* code */
      cin>>a[i];
    }


    cin>>q;
   
    for (int i = 0; i <q; i++){

      int x;cin>>x;

       int ans=0,l=0,r=0;

      for (int i = 0; i <n; i++)
      {
        /* code */
        if(a[i]==x){
          ans++;
          int idx=i;

          for (int j = idx-1; j >=0;j--)
          {
            /* code */
            if(a[j]>x) l++;
            else break;
          }

          for (int k = idx+1; k <n; k++)
          {
            /* code */
            if(a[k]>=x) r++;
            else break;
          }
        }
      }
        ans+=l+r+(l*r);
       cout<<ans<<endl;
    }


  
    
    
   
    
	    
  // }
  
  return 0;
}