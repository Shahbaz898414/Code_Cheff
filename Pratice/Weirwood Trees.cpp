#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
const int MOD = 1000000007;

int powerOfTwo(int n)
{
  int result = 1;
  for (int i = 0; i < n; i++)
  {
    result = (result * 2) % MOD;
  }
  return result;
}

int main()
{

  // int t;cin >> t;

  // while (t--) {

  // }

  int n, q;
  cin >> n >> q;

  long long int edges = 2;
  for (int i = 1; i < n; i++)
  {
    edges = (edges + powerOfTwo(i + 1)) % MOD;
  }

  // cout<<edges<<endl;

  long long int top = 1, bottom = powerOfTwo(n) % MOD, left = n + 1, right = n + 1;

  for (int i = 1; i <= q; i++)
  {
    int command;
    cin >> command;
    if (command == 1)
    {
      int orientation;
      cin >> orientation;
      switch (orientation)
      {
      case 1: // right
        edges = (edges * 2 + right) % MOD;
        top = (top * 2) % MOD;
        bottom = (bottom * 2) % MOD;
        break;
      case 2:
        edges = (edges * 2 + left) % MOD;
        top = (top * 2) % MOD;
        bottom = (bottom * 2) % MOD;
        break;
      case 3:
        edges = (edges * 2 + top) % MOD;
        top = bottom;
        right = (right * 2) % MOD;
        left = (left * 2) % MOD;
        break;
      case 4:
        edges = (edges * 2 + bottom) % MOD;
        bottom = top;
        right = (right * 2) % MOD;
        left = (left * 2) % MOD;
        break;
      }
    }
    else
    {
      cout << edges % MOD << "\n";
    }
  }

  return 0;
}
