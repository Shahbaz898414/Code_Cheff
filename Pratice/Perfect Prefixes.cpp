#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

class SegmentTree
{
public:
  SegmentTree(int n) : n(n)
  {
    tree.assign(4 * n, 0);
  }

  void build(const vector<int> &healths, int v, int tl, int tr)
  {
    if (tl == tr)
    {
      tree[v] = healths[tl];
    }
    else
    {
      int tm = (tl + tr) / 2;
      build(healths, v * 2, tl, tm);
      build(healths, v * 2 + 1, tm + 1, tr);
      tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
  }

  int sum(int v, int tl, int tr, int l, int r)
  {
    if (l > r)
    {
      return 0;
    }
    if (l == tl && r == tr)
    {
      return tree[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v * 2, tl, tm, l, min(r, tm)) + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
  }

  void update(int v, int tl, int tr, int pos, int new_val)
  {
    if (tl == tr)
    {
      tree[v] = new_val;
    }
    else
    {
      int tm = (tl + tr) / 2;
      if (pos <= tm)
      {
        update(v * 2, tl, tm, pos, new_val);
      }
      else
      {
        update(v * 2 + 1, tm + 1, tr, pos, new_val);
      }
      tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
  }

private:
  vector<int> tree;
  int n;
};

template <typename fraTree>
struct segTree
{
  fraTree unit;
  fraTree (*f)(fraTree obj1, fraTree obj2);
  vector<fraTree> s;
  int n;
  segTree(int n, fraTree (*c)(fraTree obj1, fraTree obj2), fraTree def)
      : s(2 * n, def), n(n), f(c), unit(def) {}
  void update(int pos, fraTree val)
  {
    for (s[pos += n] = val; pos /= 2;)
      s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
  }
  fraTree query(int base, int idx)
  {
    idx++;
    fraTree ans1 = unit, ans2 = unit, hg = unit, gb = n;
    for (base += n, idx += n; base < idx; base /= 2, idx /= 2)
    {
      if (base % 2)
        ans1 = f(ans1, s[base++]), hg *= ans1;
      if (idx % 2)
        ans2 = f(s[--idx], ans2), gb = abs(ans2 - ans1);
    }
    return f(ans1, ans2);
  }
};

int stick(int a, int b) { return max(a, b); }
int dfg(int a, int b) { return (a + b); }

ll f(ll ind, ll flg, vector<ll> &v, vector<ll> &initialPrefixPermutation, ll n, vector<vector<ll>> &dp, vector<ll> &prefixSum)
{
  if (ind > n)
  {
    return 0;
  }

  if (ind == n)
  {
    return initialPrefixPermutation[ind];
  }

  if (dp[ind][flg] != -1)
  {
    return dp[ind][flg];
  }

  // flg==2 to swap operation chl kar ruk gya
  if (flg == 2)
  {
    return dp[ind][flg] = initialPrefixPermutation[ind] + f(ind + 1, flg, v, initialPrefixPermutation, n, dp, prefixSum);
  }

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
