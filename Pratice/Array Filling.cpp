#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


bool binary_search(ll mian, vector<ll> &fjng, ll g)
{
  ll ans = 0;
  for (int i = 0; i < fjng.size(); i++)
  {
    if (fjng[i] < mian)
      ans += mian - fjng[i];
    else
      break;
  }
  return ans <= g;
}

int maximumNumberOfStringPairs(vector<string> &v)
{
  int len = v.size();

  map<string, int> mp;

  for (int i = 0; i < len; i++)
  {
    string s = v[i];
    sort(s.begin(), s.end());
    mp[s]++;
  }

  int cnt = 0;

  for (auto it : mp)
    if (it.second > 1)
      cnt++;

  return cnt;
}

int main() {
  int t = 1;cin >> t;
  while (t--) {
    ll n,m;cin>>n>>m;

  }

  return 0;
}


/*

If A= 4 and B = 6, observe that we can only reach every integer in the set{ ..., -8,-6,-4,-2,0,2,4,6,8, ...}
If A=3and B = 5, observe that we can only reach every integer in the set{ ..., -3,-2,-1,0,1,2,3, ...}

If you try out other simple examples, soon you will be able to notice that given A and B, one can only
reach integers that are multiples of the greatest common divisor (gcd) of A and B. Another way of looking
at this is that every integer P that satisfies, Ax + By = P, is reachable. Here x and y are arbitrary integers. [
x=2 means that the chef jumps 2A units to the right, x=-5 means he jumps 5A units to the left]. It can be
proved that P is a multiple of the gcd of Aand B.

Thus, Chef Shifu can reach multiples of the gcd of A and B. Let X = gcd(A,B). Chef Po can reach multiples of
the ged of C and D. Let Y = gcd(C,D). Thus, every multiple of X which is also a multiple of Y can always be
reached by both the chefs. If we find the least common multiple of X and Y, say L, then every multiple of L
can be reached by both.




Know more about Greatest Common Divisor and Least Common Multiple.

Coming back to the solution - count all the positive reachable integers in the interval (0,K]. This is simply
K/L. The number of negative reachable integers must be same due to symmetry. And don't forget to add
the center point too. So the answer is 2 * (K/L) + 1. Here, the only problem was that L may not fit into a
64-bit integer but the final answer would always fit into a 64-bit signed integer. This could be handled by a
simple repeated division.

From the definition of the least common multiple, we have L = (X * Y)/gcd(X,Y), this is same as, S =
X/ged(X.Y), L=S*Y

T=K/L=K/S*Y), thisis same as, R=K/S, T=R/Y

Thus, all the intermediate results could fit into 64-bit integers. Or you could learn to use your favorite
library that handles large integers :).


*/