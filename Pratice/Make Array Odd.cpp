#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
    long long n,x;
       cin>>n>>x;
       long long arr[n];
       long long oddCount=0,evenCount=0;
       for(long long i=0;i<n;i++){
           cin>>arr[i];
       }
       for(long long i=0;i<n;i++){
           if((arr[i]%2)==0) evenCount++;
           else oddCount++;
       }
       if(oddCount==n) cout<<0<<endl;
       else if((x%2)==0 && oddCount==0) cout<<-1<<endl;
        else if((x%2)==0 ) cout<<evenCount<<endl;
        else cout<<(evenCount/2)+(evenCount%2)<<endl;
   }
  
  return 0;
}