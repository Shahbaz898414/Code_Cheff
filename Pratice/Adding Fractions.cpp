
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define MOD 998244353
// const int MOD = 1e9 + 7;

ll expo(ll a, ll b, ll mod)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return res;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    ll n;
    cin >> n;

    ll ans = ((n * (n + 1) % MOD) * (n + 1)) % MOD;

    ans = (ans * expo(4, MOD - 2, MOD)) % MOD;

    cout << ans << endl;
  }

  return 0;
}




/*


Adding Fractions
You have discovered a new way to add fractions ! Now, the result of adding fractions a/b and c/d is (a + c)/(b + d). Similarly the result of adding 3
fractions a/b, c/d, e/f is (a+c+ e)/(b +d+f), and so on. You are given a list of N fractions a_1/b_1, a_2/b_2, ... ,a_N/b_N. You wonder what for each
fraction i is the maximum fraction that you can obtain by adding together some continuous fractions in the list (possibly 1) starting at i ?

For example, let N = 4 and the fractions be 1/1, 4/3, 10/1 and 5/4. The maximum fraction you can obtain by starting at index 1 is 3/1 (1/1 + 4/3 + 10/1).
Similarly, the maximum fraction you can obtain by starting at index 2 is 7/2 (4/3 + 10/1). By starting at index 3, the maximum sum you can obtain is
10/1 itself, and by starting at index 4, you can obtain sum 5/4.

Input :
The first line contains T the number of test cases. T test cases follow. The first line of each test case contains N. Each of the next N lines contains a
fraction given in the form "a_i/b_i". A blank line seperates two test cases.

Output :
For each test case, output N lines. The ith line contains the maximum fraction you can obtain by adding continuous fractions in the list starting at
index i. The numerator and denominator of any fraction you output should have gcd 1. Output a blank line after each test case.


*/