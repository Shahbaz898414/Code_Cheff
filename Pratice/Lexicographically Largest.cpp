#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, m;
    cin >> n >> m;

    ll arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll brr[n];

    ll prev = arr[0];

    brr[0] = arr[0];

    for (ll i = 1; i < n; i++)
    {
      /* code */
      if (arr[i] == arr[i - 1])
      {
        brr[i] = arr[i] * (m / arr[i]);
      }
      else
      {

        ll val = arr[i - 1] * ((m / arr[i - 1]) + 1) - arr[i];

        cout << 1 << " " << i << " " << val << " " << arr[i - 1] << " " << ((m / arr[i - 1]) + 1) << endl;

        while (val > m || __gcd(val, arr[i - 1]) != arr[i])
          val -= arr[i];
        brr[i] = val;
      }
    }

    for (int i = 0; i < n; i++)
    {
      cout << brr[i] << " ";
    }

    cout << endl;
  }
  return 0;
}
