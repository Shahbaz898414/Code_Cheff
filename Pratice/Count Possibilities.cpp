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

    // for(auto it:st){
    //   cout<<it<<" ";
    // }

    // cout<<endl;

    int src=*st.begin();

    vector<int> level(n+1,0);
    vector<int>  sz(n+1,0);

    


    function<void(int,int)> dfs = [&] (int node, int par) {
     
     
      sz[node] = 1;
      level[node] = level[par] + 1;



      for (int child : adj[node]) {

       
        if (child != par) {
           cout<<child<<" "<<par<<endl;
          dfs (child, node);
          sz[node] += sz[child];
        }
      }
        


    };

    dfs(src,0);


    /*
    
    2 0
    5 1
    4 1
    3 0
    6 1
    8 1
    7 1
    7 1
    
    
    */

  //   for(auto it:sz){
  //     cout<<it<<" ";
  //   }


  // cout<<endl;

  //   for(auto it:level) {
  //     cout<<it<<" ";
  //   }
  //  cout<<endl;  


    vector<int> ans (n + 2, 0);
	
    for (int node = 1; node <= n; node++) {
      ans[level[node]]++;
      ans[n - sz[node] + 2]--;
      
    }
    
    // for(auto it:ans){
    //   cout<<it<<" ";
    // }

    // cout<<"ans"<<endl;

    for (int i = 2; i <= n; i++)
      ans[i] += ans[i - 1];

    // cout<<"ans"<<endl;
    
    for (int i = 1; i <= n; i++) {
      cout << ans[i] << " ";
    }
     cout << endl;

  }
  return 0;
}





/*



Today was my 28th day out of the 100 days  hard challenge.

So today, I solved 5 problems .

1. One or All (https://lnkd.in/dMBJa_7f)


2. Smallest Difference (https://lnkd.in/d_iHEcfu)


3. Two Counters (https://lnkd.in/dm7XB6HF)


4. K Flip (https://lnkd.in/dg-XrdMq)


5. Mean equals Median  (https://lnkd.in/d4jM22Sj)

*/