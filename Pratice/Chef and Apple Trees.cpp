#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

  ll t;cin>>t;

  while(t-->0){

      ll n;cin>>n;

      ll a[n];

      set<int> se;
      map<int,int> mp;

      for (int i = 0; i <n; i++) {
        cin>>a[i];
        se.insert(a[i]);

        mp[a[i]]++;
      }

      cout<<mp.size()<<endl;
      

      
      

  }

  

  

  return 0;
}

