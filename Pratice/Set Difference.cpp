#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll MOD = pow(10, 9) + 7;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
     
      cin >> arr[i];


    }

    sort(arr.begin(), arr.end());

    int p = 0;
    int q = 0;

    for (ll i = 0; i < n; i++)
    {
     
      p = (2 * p + arr[i]) % MOD;
      q = (2 * q + arr[n - 1 - i]) % MOD;

    }

    cout << (q + MOD - p) % MOD << endl;


  }
  return 0;
}



