#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
        ll n;
        cin >> n;

        vector<ll> ar(n + 1);

        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        ll mx = *max_element(ar.begin() + 1, ar.end());

        vector<ll> pos;

        for (ll i = 1; i <= n; i++)
        {
            if (ar[i] == mx)
                pos.push_back(i);
        }

        pos.push_back(pos[0] + n);

        for(auto it:pos){
          cout<<it<<" ";
        }

        cout<<endl;

        ll ans = 0;
        ll sz = n / 2;

        for (ll i = 1; i < pos.size(); i++)
            ans += max(0LL, pos[i] - pos[i - 1] - sz);

        cout << ans << endl;
  }
  return 0;
}



/*
1 7 2 3 7 4 7 3 2 3 1 1 2 2






Today was my 31th day out of the 100 days  hard challenge.
So today, I solved 5 problems .


1. Box of Chocolates (https://www.codechef.com/problems/CHCBOX?tab=statement
Assume that the range is circular,so Arr[n+i] ​ = Arr[i].
we want the number of circular subarrays of length   N/2 ​   in  Arr which don’t contain the maximum element.First  Vector pos contain the maximum element index and  it is also contain one more index in end of Vector 
pos.push_back(pos[0] + n), Beacuse Arr is circircular.
Then we will calculate Subarray of size  >= N/2. 
example:-
1
14
1 7 2 3 7 4 7 3 2 3 1 1 2 2
In above example we found longest Subarray size of  8.
 
ans += max(0LL, pos[i] - pos[i - 1] - N/2);





*/