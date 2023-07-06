#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
      if (s[i] == ':' and s[i + 1] == ')')
      {
        int j = i + 2;
        while (j < n and s[j + 1] == ')')
        {
          j++;
        }

        if (s[j] == ':')
        {
          cnt++;
        }
      }
    }

    cout << cnt << endl;
  }

  return 0;
}