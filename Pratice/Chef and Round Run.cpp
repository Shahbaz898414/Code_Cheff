#include <bits/stdc++.h>
#define int long long int
using namespace std;

#define REP(i, n) for (int i = 1; i <= n; i++)

vector<int> ar[1000001];
vector<int> tr[1000001];

vector<int> scc, order;

int vis[1000001];
int val[1000001];

int dfs(int node)
{
  vis[node] = 1;

  for (int adj : ar[node])
  {
    if (vis[adj] == 0)
      dfs(adj);
  }

  order.push_back(node);
}

int dfs1(int node)
{
  vis[node] = 1;

  for (int adj : tr[node])
  {
    if (vis[adj] == 0)
    {
      dfs1(adj);
    }
  }

  scc.push_back(node);
}

void solve()
{
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<int> adj(n);
  stack<int> stk;

  for (int i = 0; i < n; i++)
  {
    /* code */
    adj[i] = (1 + i + arr[i]) % n;
  }

  int ans = 0;
  for(auto it:adj){
    cout<<it<<" ";
  }
  cout<<endl;

  vector<int> indeg(n, 0);

  for (int i = 0; i < n; i++)
  {
    /* code */
    indeg[adj[i]]++;
  }

  for(auto it:indeg) {
    cout<<it<<" ";
  }
  cout<<endl;

  for (int i = 0; i < n; i++)
  {
    /* code */
    if (indeg[i] == 0)
    {
      cout<<i<<" ";
      stk.push(i);
    }
  }


  cout<<endl;


  while (!stk.empty()) {

    int curr = stk.top();

    
    stk.pop();

    ans++;

    indeg[adj[curr]]--;

    if (indeg[adj[curr]] == 0) {
      stk.push(adj[curr]);
    }
  }

  cout << n - ans << endl;
}

int32_t main()
{

  int t, n, res;
  cin >> t;

  while (t--)
  {

    solve();
    // cin>>n;
    // order.clear(),res=0;

    // REP(i , n){
    //   ar[i-1].clear();
    //   tr[i-1].clear();
    //   vis[i-1]=0;
    //   cin>>val[i-1];
    // }

    // REP(i,n){
    //   int a=i-1;
    //   int b=(i-1+val[i-1]+1)%n;

    //   ar[a].push_back(b);
    //   tr[b].push_back(a);
    // }

    // // SCC section

    // REP(i,n+1){
    //   if(vis[i-1]==0)  dfs(i-1);
    // }

    // REP(i,n)  vis[i-1]=0;

    // reverse(order.begin(),order.end());

    // for(int i:order){
    //   if(vis[i]==0){
    //     scc.clear();

    //     dfs1(i);

    //     if(scc.size()==1 and (scc[0]!=ar[scc[0]][0]))  continue;

    //     res+=scc.size();
    //   }
    // }

    // cout<<res<<endl;
  }

  return 0;
}
