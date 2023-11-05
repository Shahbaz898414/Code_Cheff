#include <bits/stdc++.h>

using namespace std;
#define ll long long
const  int N=1e5+5;


ll n,x,a[N],dp[N][2];



int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    cin>>n>>x;

    for (ll i = 1; i <=n; i++) {
      cin>>a[i];
    }

   for(int i = 2; i <= n; i++) {
            dp[i][0] = max((a[i]^a[i - 1]) + dp[i - 1][0], (a[i]^ (a[i - 1] + x)) + dp[i - 1][1]);
            dp[i][1] = max(((a[i] + x) ^ a[i - 1]) + dp[i - 1][0], ((a[i] + x)^ (a[i - 1] + x)) + dp[i - 1][1]);
  }
       
       
       
        cout << max(dp[n][0], dp[n][1]) << endl;
    
    

       
        
  }
  return 0;
}