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

    ll n, m;
    cin >> n >> m;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin >> arr[i];
    }

    ll maxi = *max_element(arr.begin(), arr.end()), sum = 0, mini = *min_element(arr.begin(), arr.end());

    for (ll i = 0; i < n; i++)
    {
      /* code */
      sum += (maxi - arr[i]);
    }

    cout << max(maxi - mini, (sum + (m - 1)) / m) << endl;
    
  }
  return 0;
}
