#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll t;cin>>t;

  while(t--){
    int n,m,k;cin>>n>>m>>k;
    int cnt1=0,cnt2=0;

    int arr1[m],arr2[k],fds[n+1]={0},a[n+1]={0};

    for (int i=0; i<m; i++) {
      cin>>arr1[i];
      fds[arr1[i]]=1;
    }

    for (int i=0; i<k; i++) {
      cin>>arr2[i];
      a[arr2[i]]=1;
    }

    // set<int> s;
    for (int i = 1; i <=n; i++) {
      if(fds[i]==1 and a[i]==1) cnt1++;
    }

    for (int i = 1; i <=n; i++) {
      if(fds[i]==0 and a[i]==0) cnt2++;
    }
    
    cout<<cnt1<<" "<<cnt2<<endl;
    
  }

}