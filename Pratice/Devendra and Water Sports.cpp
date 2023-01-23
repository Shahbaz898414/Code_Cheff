#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
    int z,y,a,b,c;cin>>z>>y>>a>>b>>c;

    int x=abs(z-y);
    int sum=a+b+c;

    if(x>=sum){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }


  }
}
