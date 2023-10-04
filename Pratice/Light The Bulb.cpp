#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll int n;
    string s, t;
    cin >> n >> s >> t;

    int seg = 0, i = 0;

    while (i < n)
    {
      if (s[i] != t[i])
      {
        while (i < n && s[i] != t[i])
          i++;

        seg++;
      }
      else
        i++;
    }

    

    if (seg == 1)
    {
      ll val = (n - 1) * 1ll * 2;
      cout << val << "\n";
    }else if (seg == 0)
      cout << (n * 1ll * (n + 1) / 2) << "\n";

    else if (seg > 2)
      cout << 0 << "\n";

    else
      cout << 6 << "\n";



  }
  return 0;
}
