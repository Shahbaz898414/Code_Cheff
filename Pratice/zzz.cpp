#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
            cin >> v[i];

        ll ans = b;

        for(ll i=0;i<n;i++){
            ans += min(a - 1, i);
        }
            

        cout << ans << endl;
    }

    return 0;
}
