#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

  // ll t;cin>>t;

  // while(t-->0){

      ll n;cin>>n;
      ll cnt=0,j,k;
      ll a[n],mi=INT_MAX,mx=INT_MIN;

      for (int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i]<mi) mi=a[i],j=i;
        if(a[i]>mx) mx=a[i],k=i;
      }

      sort(a,a+n);

      for (int i = 0; i <n-1; i++)
      {
        cnt+=a[i]*a[i+1];
      }

      cout<<cnt<<endl;
      


      

  // }

  

  

  return 0;
}

