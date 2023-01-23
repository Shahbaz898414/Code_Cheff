#include<bits/stdc++.h>
using namespace std;

int main() {

  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int> a(32,0);
    a[0]=0;
    for (int i = 1; i <=31; i++){
      a[i]=(1LL<<i)-1;
    }
    int ans=0;

    // for (int i = 0; i <32; i++) {
    //   cout<<a[i]<<" "<<ans++<<endl;
    // }

    while(n>0) {
      if(n&(n+1)==0){
        ans+=(n*(n+1));
        break;
      }else{
        for (int i = 1; i<31; i++) {
          if(n>a[i] and n<a[i+1]){
            ans+=2*(n-a[i])*(a[i+1]);
            n=a[i]-(n-a[i]);
            break;
          }
        }
      }
    }

    cout<<ans<<endl;
    
  }  
     return 0;
}
 
