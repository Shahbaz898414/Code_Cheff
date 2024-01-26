#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

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

  int n, x;
  cin >> n >> x;

  int arr[n],brr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < x; i++)
  {
    cin >> brr[i];
  }

  int c = 0;

  for (int i = 0; i < x; i++)
  {

    c = max(c, brr[i]);
  }

  sort(arr+n-c,arr+n);

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  
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