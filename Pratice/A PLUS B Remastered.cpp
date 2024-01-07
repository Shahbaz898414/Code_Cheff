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
    cin >> n;

    vector<ll> arr(n);

    vector<ll> brr(n);

    for (ll i = 0; i < n; i++)
    {

      cin >> arr[i];
    }

    for (ll i = 0; i < n; i++)
    {

      cin >> brr[i];
    }

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end(), greater<int>());

    bool fl=true;

    for (int i = 0; i < n; i++)
    {
      /* code */
      if (arr[i] + brr[i] != arr[0] + brr[0])
      {
        fl=false;
        break;
      }
    }



    if(!fl){
      cout<<-1<<endl;
    }else{
      for (int i = 0; i < n; i++)
      {
        /* code */
        cout<<arr[i]<<" ";
      }

      cout<<endl;

      for (int i = 0; i < n; i++)
      {
        /* code */
        cout<<brr[i]<<" ";
      }

      cout<<endl;
      
      
    }
  }
  return 0;
}
