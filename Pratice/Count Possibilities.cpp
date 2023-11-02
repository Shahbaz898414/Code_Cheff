#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()  {


  int t; cin >> t;

  while (t--) {
      

    ll n;cin>>n;

    vector<int>  adj[n+1];

    set<int>  st;

    for (int i =1; i <=n; i++)
    {
      
      st.insert(i);
    }
    

    for (int i = 0; i < n-1; i++)
    {
      int u,v;cin>>u>>v;
      adj[u].push_back(v);

      if(st.find(v)!=st.end())  st.erase(v);

    }

    int src=*st.begin();

    vector<int> level(n+1,0);
    vector<int>  sz(n+1,0);
    


  }
  return 0;
}


