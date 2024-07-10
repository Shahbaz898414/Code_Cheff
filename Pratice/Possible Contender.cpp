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
