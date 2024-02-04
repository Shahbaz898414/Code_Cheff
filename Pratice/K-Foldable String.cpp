#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int o = 0, z = 0;
    for (auto &ch : s)
    {
      if (ch == '1')
        o++;
      else
        z++;
    }
    if (z % (n / k) || o % (n / k))
      cout << "IMPOSSIBLE" << endl;
    
    else
    {


      int az = z / (n / k);


      int ao = o / (n / k);


      // cout<<az<<" "<<ao<<endl;
      string ans;
      string tmp;
      for (int i = 0; i < az; i++)
      {
        tmp.push_back('0');
      }
      for (int i = 0; i < ao; i++)
      {
        tmp.push_back('1');
      }


      // cout<<tmp<<endl;


      string tmp1 = tmp;


      reverse(begin(tmp1), end(tmp1));

      // cout<<tmp1<<" "<<tmp<<endl;

      for (int i=0 ; i < (n / k); i++) {
        if (i % 2 == 0) ans += tmp;
        else ans += tmp1;
        
      }

      cout << ans << endl;

    }
  }

  return 0;
}
