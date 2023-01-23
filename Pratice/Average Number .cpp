#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;

  while(t-->0){

      ll n,k,v,sum=0;cin>>n>>k>>v;

      ll a[n];

      for (int i = 0; i < n; i++) {
        cin>>a[i];
        sum+=a[i];
      }

      ll sum2=(v*(n+k)-sum);
      ll d=(v*(n+k)-sum)/k;

      cout<<sum2<<" sum2"<<endl;
      cout<<d<<" d"<<endl;
      cout<<sum2%k<<"  sum2%k"<<endl;
      if(d<=0 || sum2%k!=0) {
        cout<<-1<<endl;
      }else{
        cout<<d<<endl;
      }

  }

  

  

  return 0;
}

