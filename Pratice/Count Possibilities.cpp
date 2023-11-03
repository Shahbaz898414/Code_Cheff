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



Today was my 29th day out of the 100 days  hard challenge.

So today, I solved 5 problems .

1. Guess the winner! (https://www.codechef.com/problems/FIZZBUZZ2305)
Bob wins for any even number. Alice wins for any odd number. 1 is edge case for that also Bob wins as no move exists for one.


2. Count Possibilities (https://www.codechef.com/problems/FIZZBUZZ2307?tab=statement)
For a node, all ancestors come before and all nodes in subtree (child nodes), come later. So we know the possible range for all nodes, we can add 1 to this range using segment tree, fenwick tree etc.


3. Save People (https://www.codechef.com/problems/FIZZBUZZ2306)
ll infect=min({n*y,m*x,n*(m-y+1),m*(n-x+1)});
o maximize our cells we should mark cells adjacent to infected ones. Calculate possibilities for all 4 possibilities and take maximum one.


4. Playing with OR (https://www.codechef.com/problems/FIZZBUZZ2304)
Only the last bit matters for odd and even. So keep tracking of last bit count for current subarray of size K. Add to answer if count of set last bit is more than zero.

5. Reach Anywhere  (https://www.codechef.com/problems/FIZZBUZZ2309)
We can traverse one each forward and backward and make any distance for any node with same parity. So we just need to find the minimum odd length distance and even length distance for each node. This can be done by having two nodes for each node, Node-odd and Node-even, then add all edges from odd to even and even to odd. Now we can start bfs from 1-even and get all the required minimum distances.



*/