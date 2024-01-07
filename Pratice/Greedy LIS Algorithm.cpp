#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int N = 1e5 + 5;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    ll n, x, y;
    cin >> n>>x;

    
  }
  return 0;
}



/*


To summarise, Alice's LIS algorithm greedily keeps on finding the first valid element she can include in her increasing sequence, includes it and then
continues the process.

Bob noticed that Alice's algorithm is often wrong, for example on a sequence like A = [1, 4, 2, 3, 5], the length of the LIS is actually 4 ([1, 4, 2, 3, 5])
while Alice's algorithm gives you 3 ([1, 4, 2, 3, 5]). Note that underlined elements represent the respective sequences.

Given integers N and X, Bob wants you to find a permutation of length N, such that:

. The difference between the length of the actual LIS and the value returned by the alicelis function is exactly X.

If multiple such permutations exist, you may print any. If no such permutation exists, print -1.

Note that a permutation of length N is a sequence of length N, which contains each integer from 1 to N exactly once.

Input Format
. The first line of input will contain a single integer T, denoting the number of test cases.
. Each test case consists of 2 space-separated integers, N and X, the length of the permutation and the required difference between the actual LIS
and the alicelis function.

Output Format
For each test case, output a new line, consisting of N space-separated integers, representing a permutation of integers from 1 to N.

If multiple such permutations exist, you may print any. If no such permutation exists, print -1.



*/