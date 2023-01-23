#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int t;cin>>t;
  while(t--){
    ll m,k;cin>>m>>k;

    set<int> s;
    ll a[k];
    int h=INT_MAX,b,u=0;
    // bitset<10000> b1,b2,b3;
    for (int i = 0; i < m; i++) {
      ll x;cin>>x;
      s.insert(x);
      // b1.set(x);
    }

    for (int i = 0; i < k; i++) {

      // ll y;cin>>y;

      cin>>a[i];
      // s.insert(y);
      // b2.set(y);
    }

    for (int i = 0; i <k; i++) {
      if(s.count(a[i])){
        u++;
        // b=a[i];
      }
      // if(h<b){
      //   h=b;
      // }
    }
    cout<<u<<endl;


  }
  return 0;
}