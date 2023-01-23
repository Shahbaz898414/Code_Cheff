#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> st;

int main() {
  ll t;cin>>t;

  while(t--){
    int x;cin>>x;

    if(x==1){
      ll n;cin>>n;
      st.push(n);
    }else {
      if(!st.empty()){
        ll ans=st.top();
        cout<<ans<<endl;
        st.pop();
      }else {
        cout<<"kuchbhi?"<<endl;
      }
    }
  }

}