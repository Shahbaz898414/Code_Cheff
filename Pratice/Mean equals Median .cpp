#include<bits/stdc++.h>
#define int long long
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
   int n;cin>>n;
   vector<int> a(n);
   int sum=0;
   for(int i=0;i<n;i++) {
       cin>>a[i];sum+=a[i];
   }
   sort(a.begin(),a.end());
   int med=a[(n-1)/2];
   int l=med, r=a[n-1];
   int ans=0;
   while(l<=r){ 
      int mid=(l+r)/2;
      int reqSum=mid*n;
      int meanOp=reqSum-sum;
      int medOp=0;
      for(int i=(n-1)/2;i<n;i++){
         int need=max((int)0,mid-a[i]);
         medOp+=need;
      }
      if(meanOp>=medOp) {
        ans=meanOp;r=mid-1;
         
      }
      else {
        l=mid+1;
      }
   }
   cout<<ans<<endl;
   

  }
}

