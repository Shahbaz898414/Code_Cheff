#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

int modInverse(int A, int M = MOD) {
    int m0 = M;
    int y = 0, x = 1;
    if (M == 1)
        return 0;
    while (A > 1) {
        int q = A / M;
        int t = M;
        M = A % M, A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}



void solve() {


    int n,m; cin>>n>>m;


    string s[n];

    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }

    vector<vector<bool>> dp(n,vector<bool>(m,false));

    if (n==1) {
        cout<<1<<endl;
        return;
    }


    for (int i = 0; i < m; i++) {
        if (s[n-1][i]=='1') dp[n-1][i]=true;
    }


    for (int i = n - 2; i >= 0; i--) {
        int ones = 0;
        for (int j = 0; j < m; j++) {
            if (s[i][j]=='1') ones++;
        }

        if (ones<2) continue;

        bool check =false;

        for (int j = 0; j < m; j++) {
            if (s[i][j]=='1' && dp[i+1][j]){
                check = true;
            }
        }

        for (int j = 0; j < m; j++) {
            if (check && dp[i+1][j]){
                dp[i][j]=true;                
            } else if (s[i][j]=='1') dp[i][j]=true;
        }
    }



    int count_0=0, count_1=0;
    for (int i = 0; i < m; i++) {
        if (dp[1][i]){
            if (s[0][i]=='1') count_1++;
            else count_0++;
        }
    }


    int ans = 1;


    for (int i = 1; i <= count_0+count_1; i++) {
        ans = ans*i;
        ans = ans%MOD;
    }


    for (int i = 1; i <= count_0; i++) {
        ans = ans * modInverse(i);
        ans = ans%MOD;
    }


    for (int i = 1; i <=count_1; i++) {
        ans = ans * modInverse(i);
        ans = ans%MOD;
    }


    cout<<ans<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}