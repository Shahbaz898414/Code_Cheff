#include <iostream>
#include <vector>

using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<int>& a, vector<int>& result) {
    for (int v : adj[u]) {
        dfs(v, adj, a, result);
        a[u] ^= a[v]; // Calculate XOR of all values in the subtree rooted at u
        result[u] += result[v]; // Accumulate the cost from child nodes
    }
    result[u] += a[u]; // Add the cost of changing the value at vertex u
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);
        vector<int> a(n + 1);
        vector<int> result(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        if (n > 1) {
            for (int i = 2; i <= n; i++) {
                int u, v;
                cin >> u >> v;
                adj[u].push_back(v);
            }

            dfs(1, adj, a, result);
        }

        for (int i = 1; i <= n; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
