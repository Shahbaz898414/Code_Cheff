#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

  // int t;cin>>t;
  // while(t--){
    int a,b,c,d;cin>>a>>b>>c;

      int f=abs(c-a);
      int x=f/b;
      if(x%2==0 and x>=2){
        cout<<"Lucky Chef"<<endl;
      }else{
        cout<<"Unlucky Chef"<<endl;
      }
  // }
 
  
  return 0;
}

