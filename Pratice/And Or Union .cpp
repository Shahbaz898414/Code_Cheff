#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
   int n,x=0,y;cin>>n;
   int fre[31]={0};
   int a[n];

   for (int i = 0; i < n; i++){
    cin>>y;
    for (int j = 0; j <31; j++) {
      if(y&(1<<j))
        fre[j]++;
    }
   }
   for (int i = 0; i < 31; i++)
   {
    if(fre[i]>1){
      x+=(1<<i);
    }
   }
   cout<<x<<endl;

  }
}
