#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;

  while(t-->0){

      ll n,sum=0;cin>>n;

      ll a[n],pos=0,neg=0,c=0;

      for (int i= 1; i <=n; i++) {
        cin>>a[i];
        if(a[i]==1) {
          pos++;
        }else {
          neg++;
        }
      }

      if(abs(pos-neg)<2){
        cout<<"YES"<<endl;
      }else if(abs(pos-neg)==2 && neg%2==0){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }

     


  }

  return 0;
}

