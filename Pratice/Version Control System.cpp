#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int t;cin>>t;
  while(t--){
    ll n,m,k;cin>>n>>m>>k;

    set<int> s;
    bitset<10000> b1,b2,b3;
    for (int i = 0; i < m; i++) {
      ll x;cin>>x;
      s.insert(x);
      b1.set(x);
    }

    for (int i = 0; i < k; i++) {

      ll y;cin>>y;
   
      s.insert(y);
      b2.set(y);
    }

    b3 = b1 & b2;

    ll cou=b3.count();
    ll c=0;
    for(int i=1;i<=n;i++)
   {
      if(!s.count(i))c++;
   }
    // cout<<endl;
    cout<<cou<<" "<<c<<endl;   
  }
  return 0;
}