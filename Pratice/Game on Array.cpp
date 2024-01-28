#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

const int inf = 1ll << 60;

int modInverse(int A, int M = MOD)
{
  int m0 = M;
  int y = 0, x = 1;
  if (M == 1)
    return 0;
  while (A > 1)
  {
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

void solve()
{

  int n;
  cin >> n;
  string s;
  cin >> s;
  int to_win = n / 2;
  to_win++;
  int p = n - to_win;
  string ans = "";
  for (auto &b : s)
  {
    if (b == 'S')
    {
      ans += 'R';
    }
    else if (b == 'R')
    {
      ans += 'P';
    }
    else
    {
      ans += 'S';
    }
  }

  
  for (int i = 0; i < ans.size(); i++)
  {
    if (p == 0)
    {
      break;
    }
    if (ans[i] == 'R' or ans[i] == 'S')
    {
      ans[i] = 'P';
      p--;
    }
  }
  cout << ans << "\n";
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}




/*


Today was my 13th day out of the 75 days hard challenge.
So today. I solved 5 question.

1. Rock-Paper-Scissors (https://www.codechef.com/problems/MINRPC).

2. Christmas Candy (https://www.codechef.com/problems/CHRISCANDY).

3. Exact Savings (https://www.codechef.com/problems/EXACTSAVINGS)

4. 1074. Number of Submatrices That Sum to Target (https://leetcode.com/problems/number-of-submatrices-that-sum-to-target/description/?envType=daily-question&envId=2024-01-28).


5. Am I Lucky! (https://www.codechef.com/problems/SPCP4?tab=statement).

*/