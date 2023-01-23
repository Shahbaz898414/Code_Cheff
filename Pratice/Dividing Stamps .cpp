#include<bits/stdc++.h>
#define int long long 
using namespace std;


int main() {
  int n,m=0;cin>>n;
    int a[n];

    // string s(m,'B');

    for (int i = 0; i <n; i++) {
      cin>>a[i];
      m+=a[i];
    }
    int s;
    s=n*(n+1)/2;

   if(m==s){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
  
  return 0;
}

