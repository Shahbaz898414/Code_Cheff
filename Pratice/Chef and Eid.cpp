#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

  int t;cin>>t;
  while(t--){
   int n;cin>>n;

   int a[n],pr[n];
   vector<int> v;

   for (int i=0;i<n;i++) {
    cin>>a[i];
   }
   sort(a,a+n);

  //  cout<<a[n-1]-a[n-2]<<endl;

   for (int i=0; i<n;i++) {
     v.push_back(a[i+1]-a[i]);
   }

   sort(v.begin(),v.end());

   cout<<v[0]<<endl;
  //  for (int i = 0; i <n; i++)
  //  {
  //   /* code */
  //  }
   
   
   
  }
 
  
  return 0;
}

