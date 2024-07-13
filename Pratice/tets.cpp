#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

vector<vector<P>> graph;

P dfs(ll v, ll d, ll p) {
    P res = {d, v};
    for (auto  it : graph[v]) {
        if (it.first != p) {
            res = max(res, dfs(it.first, d + it.second, v));
        }
    }
    return res;
}

signed main() {
    ll n;
    cin >> n;
    
    graph.resize(n);
    ll total_weight = 0;
    
    for (ll i = 0; i < n - 1; ++i) {
        ll A, B, C;
        cin >> A >> B >> C;
        A--; B--;
        graph[A].emplace_back(B, C);
        graph[B].emplace_back(A, C);
        total_weight += 2 * C; 
    }
    
    
    P first_dfs = dfs(0, 0, -1);
    ll farthest_node = first_dfs.second;
    

    P second_dfs = dfs(farthest_node, 0, -1);
    ll diameter = second_dfs.first;
    
  
    ll min_travel_distance = total_weight - diameter;
    cout << min_travel_distance << endl;


    return 0;
}
