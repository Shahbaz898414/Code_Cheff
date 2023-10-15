#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n;

    string s;
    cin >> s;

    int ans = 1;

    if (n <= 3)
      k = stoi(s);
    else
      k = stoi(s.substr(n - 3));

    if (k % 8 == 0)
      cout << s << endl;

    else
    {

      int ans;


      if (n == 1) ans = 0;


      else if (n == 2) ans = stoi(s.substr(n - 2, 1));


      else ans = stoi(s.substr(n - 3, 2));


      // cout<<ans<<endl;


      
      if (ans % 4 == 0) s.back() = '8';


      else if (ans % 4 == 1) s.back() = '6';


      else if (ans % 4 == 2) s.back() = '4';


      else s.back() = '2';


      cout << s << endl;


    }
  }
  return 0;
}
