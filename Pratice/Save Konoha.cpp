#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int t;cin>>t;
  while(t--){
    ll n,z,c=0;cin>>n>>z;
    priority_queue<int>q;
    bool f=false;
    for (ll i = 0; i < n; i++) {
      int d;cin>>d;
      q.push(d);
    }

    while(z>0)
    {
        if(q.top()==0){ f=true; break; }
        else
        {
            z=z-q.top();
            ll m;
            m=q.top()/2;
            q.pop();
            q.push(m);
            c++;
        }

    }
    if(f){
      cout<<"Evacuate"<<endl;
    }else{
      cout<<c<<endl;
    }
  }
  return 0;
}
