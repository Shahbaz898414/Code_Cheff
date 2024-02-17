#include <bits/stdc++.h>
#define ll long long
#define llinf LLONG_MAX
#define llminf LLONG_MIN
#define inf INT_MAX
#define minf INT_MIN
const long long mod = 1e9 + 7;

using namespace std;

ll dp[1001][1001];

int mex(const set <int>& st) {
    int mex = 0;
    while (st.find(mex)!=st.end()) {
        mex++;
    }
    return mex;
}

ll rec(int i, int j) {
    if (i<0 or j<0) return -1;
    if (i==0 and j==0) return 0;
    if (dp[i][j]!=-1) return dp[i][j];
    set <int> st;
    return dp[i][j] = mex({rec(i-1,j), rec(i-2,j), rec(i,j-1), rec(i,j-2), rec(i-1, j-1), rec(i-2, j-2)});
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    for (int i = 0;i<=1000;i++) {
        for (int j = 0;j<=1000;j++) {
            dp[i][j]=-1;
        }
    }
    rec(1000,1000);
    int t;
    cin >> t;
    while (t--) {
        int c;
        cin >> c;
        ll ans = 0;
        for (int i = 0;i<c;i++) {
            int n,m;
            cin >> n >> m;
            ans=(ans^dp[n-1][m-1]);
        }
        if (ans==0) {
            cout << "Football\n";
        }
        else {
            cout << "MasterChef\n";
        }
    }
}