#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

vector<vector<P>> graph;

signed main()
{
  ll t;
  cin >> t;

  while (t--)
  {

   ll n;cin>>n;

   vector<ll> ar(n);

   for(ll i = 0; i < n; i++) {
      cin>>ar[i];
   }

   vector<vector<int>> g(n);

   for (int i = 0; i <n-1; i++) {
      ll u,v;cin>>u>>v;
      --u;--v;

      g[u].push_back(v);
      g[v].push_back(u);
   }


   ll root=-1;
   ll mn=*min_element(ar.begin(),ar.end());
     
    for (int i = 0; i < n; i++) {
      if(ar[i]==mn)  root=i;
    }

    cout<<n-1<<endl;

    function<void(int,int)>  dfs=[&](int u,int p){
      for(auto &v:g[u]){
        if(v==p) continue;

        dfs(v,u);
      }

      if(u!=root) cout<<u+1<<" ";
    };

    dfs(root,-1);
    
   cout<<endl;
   
  }

  return 0;
}
