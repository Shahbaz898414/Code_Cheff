#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

vector<vector<P>> graph;

bool canMakePermutation(vector<int> &A)
{
  int N = A.size();
  vector<int> count(N + 1, 0);

  for (int i = 0; i < N; i++)
  {
    if (A[i] > N)
      return false;
    count[A[i]]++;
  }

  int need = 0;
  int available = 0;

  for (int i = N; i >= 1; i--)
  {
    if (count[i] == 0)
    {
      available++;
    }
    else
    {
      need += count[i] - 1;
      if (need > available)
        return false;
    }
  }

  return true;
}


signed main()
{
  ll t;
  cin >> t;

  while (t--)
  {

    int N;cin >> N;
    

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
      cin >> A[i];
    }

    if (canMakePermutation(A))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}

