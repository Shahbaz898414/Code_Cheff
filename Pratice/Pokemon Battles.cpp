#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main()
{
    int T = 1;cin>>T;
    while (T--)
    {
        ll n;cin>>n;
      vector<ll> arr(n),brr(n);

      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>arr[i];
      }
      

      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>brr[i];
      }

       vector<pair<int, int>>v;

       for (ll i = 0; i < n; i++)
       {
        /* code */
        v.push_back({arr[i],brr[i]});
       }

       sort((v).begin(),(v).end());

       
      

      
      

    }

    

    return 0;
}

