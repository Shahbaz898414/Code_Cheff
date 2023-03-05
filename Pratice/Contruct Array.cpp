<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long
using namespace std;




int main() {
  int t;cin>>t;
  while(t--) { 
    ll n,m,k;cin>>n;

    vector<int> odd,even;

      if(n&1) cout<<-1<<endl;
      else {

        if(n == 4) {
            cout<<"0 5 343 -100\n";
            continue;
        }
        cout<<"1";  
        ll use=-2;
        for(ll i=2;i<n;i++) {
            cout<<" "<<use;
            use*=-1;
        }
        cout<<" -1"<<endl;
      }
  }
   


  return 0;
=======
#include<bits/stdc++.h>
#define ll long long
using namespace std;




int main() {
  int t;cin>>t;
  while(t--) { 
    ll n,m,k;cin>>n;

    vector<int> odd,even;

      if(n&1) cout<<-1<<endl;
      else {

        if(n == 4) {
            cout<<"0 5 343 -100\n";
            continue;
        }
        cout<<"1";  
        ll use=-2;
        for(ll i=2;i<n;i++) {
            cout<<" "<<use;
            use*=-1;
        }
        cout<<" -1"<<endl;
      }
  }
   


  return 0;
>>>>>>> origin/main
}