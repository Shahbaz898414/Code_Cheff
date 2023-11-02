#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()  {


  int t; cin >> t;

  while (t--) {
      

    ll n,m,x,y;cin>>n>>m>>x>>y;


    ll infect=min({n*y,m*x,n*(m-y+1),m*(n-x+1)});


    cout<<n*m-infect<<endl;


  }
  return 0;
}


