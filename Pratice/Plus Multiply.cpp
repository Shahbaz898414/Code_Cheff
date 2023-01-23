#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
    cin>>a[i];
    }
    int c1=0,c2=0;

    for (int i = 0; i <n; i++)
    {
      if(a[i]==2){
        c2++;
      }else if(a[i]==0){
        c1++;
      }
    }

    int ans=0;
    ans+= (c2*(c2-1))/2;

    ans+= c1*(c1-1)/2;

    cout<<ans<<endl;
    
  }
}
