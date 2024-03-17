#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
const int MOD = 1000000007;

int powerOfTwo(int n)
{
  int result = 1;
  for (int i = 0; i < n; i++)
  {
    result = (result * 2) % MOD;
  }
  return result;
}

int main()
{

  int t;cin >> t;

  while (t--) {
     int n;
        cin >> n;
        int ans = 0;
        int cur = 0;
        for(int i = 0;i<n;i++) {
            int ai;
            cin >> ai;
            cur+=ai;
            ans+=abs(cur);
        }
        cout << ans << endl;
    
  }

 

  return 0;
}


