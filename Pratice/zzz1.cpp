#include <bits/stdc++.h>

#define ll long long
using namespace std;

bool binay_search(vector<ll> &arr, ll vgf, ll k)
{
  ll main = vgf * k;
  for (ll i = 0; i < arr.size(); i++)
  {
    ll fvg = min(min(arr[i], vgf), main);
    main -= fvg;
    if (main == 0)
    {
      return true;
    }
  }
  return false;
}



int main()
{
  int t = 1;
  cin >> t;
  while (t-- > 0)
  {
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
ll left = 0;ll right = 0;
    ll ans = 0;
    
    for (ll i : arr)
    {
      right += i;
    }
    while (left <= right)
    {
      ll mid = left + (right - left) / 2;
      if (binay_search(arr, mid, k))
      {
        left = mid + 1;
        ans = max(ans, mid);
      }
      else
      {
        right = mid - 1;
      }
    }
    cout << ans << endl;
    
  }
  return 0;
}
