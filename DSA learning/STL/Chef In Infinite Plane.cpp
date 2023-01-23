#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> st;

int main() {
  ll t;cin>>t;

  while(t--){
    int n;cin>>n;
    int a[n];
    int cnt=0;
    map<int,int> mp;

    for(int i = 0; i <n; i++) {
      cin>>a[i];
      mp[a[i]]++;
    }
    
    for(auto it:mp){
      int x=it.first-1;
      if(x<it.second) cnt+=x;
      else cnt+=it.second;
    }

    cout<<cnt<<endl;
  }

}