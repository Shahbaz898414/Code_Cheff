#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long


ll f(ll ind, ll flg, vector<ll> &v, vector<ll> &initialPrefixPermutation, ll n, vector<vector<ll>> &dp, vector<ll> &prefixSum) {

  if (ind > n)
    return 0;
  

  if (ind == n)
    return initialPrefixPermutation[ind];
  

  if (dp[ind][flg] != -1)  
    return dp[ind][flg];


  // flg==2 to swap operation chl kar ruk gya
  if (flg == 2)
  
    return dp[ind][flg] = initialPrefixPermutation[ind] + f(ind + 1, flg, v, initialPrefixPermutation, n, dp, prefixSum);


  // flg==1 To swap operation chl rha h
  if (flg == 1)
  {
    // ans1 mtlb yaha se hm swap operation rook rhe h
    ll ans1 = initialPrefixPermutation[ind] + f(ind + 1, 2, v, initialPrefixPermutation, n, dp, prefixSum);

    // ans2 mtlb purana swap operation continue h
    ll ans2 = initialPrefixPermutation[ind + 1];
    ll currentSum = prefixSum[ind] - v[ind] + v[ind + 1];
    if (currentSum == ((ind * (ind + 1)) / 2ll))
    {
      ans2++;
    }
    ans2 += f(ind + 2, flg, v, initialPrefixPermutation, n, dp, prefixSum);
    return dp[ind][flg] = max(ans1, ans2);
  }

  // flg==0 start kar rhe h ind se
  if (flg == 0)
  {
    ll ans1 = initialPrefixPermutation[ind] + f(ind + 1, flg, v, initialPrefixPermutation, n, dp, prefixSum);
    ll ans2 = f(ind, 1, v, initialPrefixPermutation, n, dp, prefixSum);
    return dp[ind][flg] = max(ans1, ans2);
  }
}

void solve()
{

  ll n;
  cin >> n;

  vector<ll> v(n + 1, 0);
  vector<ll> prefixSum(n + 1, 0);

  for (ll i = 1; i <= n; i++)
  {
    cin >> v[i];
    prefixSum[i] = v[i];
    prefixSum[i] += prefixSum[i - 1];
  }
  // cout<<"prefix"<<endl;
  // for(auto it:prefixSum){
  //   cout<<it<<" ";
  // }
  // cout<<endl;

  vector<ll> initialPrefixPermutation(n + 1, 0);
  initialPrefixPermutation[0] = 1;
  ll sm = 0;

  for (ll i = 1; i <= n; i++)
  {
    sm += v[i];
    if (sm == (i * (i + 1ll)) / 2ll)
    {
      initialPrefixPermutation[i] = 1;
    }
  }

  // cout<<"initialPrefixPermutation"<<endl;

  // for(auto it:initialPrefixPermutation){
  //   cout<<it<<" ";
  // }

  // cout<<endl;

  vector<vector<ll>> dp(n + 1, vector<ll>(3, -1));

  ll ans = f(1, 0, v, initialPrefixPermutation, n, dp, prefixSum);

  cout << ans << endl;
}

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {

    solve();
  }
  return 0;
}


/*



*/