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

    ll g, p;
    cin >> g >> p;

    vector<ll> arr(11);

    for (ll i = 1; i <= 10; i++)
    {
      /* code */
      cin >> arr[i];
    }

    int days = 0;

    for (ll i = 10; i > g; i--)
    {
      /* code */
      days += (arr[i] / p);
      arr[i - 1] += arr[i] % p;
    }

    ll minans = days + 1, maxans = days + (arr[g] + p - 1) / p;

    cout << minans << " " << maxans << endl;
  }
  return 0;
}
