#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;

  while(t-->0){

      ll n,c=0;cin>>n;

      ll a[n];

      for (int i = 1; i <=n; i++) {
        cin>>a[i];
      }

      set<ll> s;

      for (int i = 2; i <=n; i++)
      {
        
         if( a[i]!=a[i-1] ){
            c++;
            s.insert(i);
            s.insert(i-1);
        }
      }

      for(auto it:s){
        cout<<it<<" ";
      }

      // if(a[n-1]!=a[0]){
      //   c++;
      // }

      // cout<<c<<endl;

      // cout<<s.size()<<endl;
      
  }

  return 0;
}

