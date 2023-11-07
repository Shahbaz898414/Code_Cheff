#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll MOD = pow(10, 9) + 7;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int n, x;
    cin >> n >> x;
    map<int, int> cnt, op;
    for (int i = 0; i < n; i++)
    {
      int y;
      cin >> y;
      cnt[y]++;
      if (x != 0)
      {
        cnt[y ^ x]++;
        op[y ^ x]++;
      }
    }


    // for(auto it:cnt){
    //   cout<<it.first<<" ";
    // }

    // cout<<endl;
    // cout<<endl;


    // for(auto it:op){
    //   cout<<it.first<<" ";
    // }

    // cout<<endl;
    // cout<<endl;


    int equal = 0, operation = 0;
    for (auto u : cnt)
    {
      if (u.second > equal)
      {
        equal = u.second;
        operation = op[u.first];
      }
      else if (u.second == equal)
      {
        operation = min(op[u.first], operation);
      }
    }


    cout << equal << ' ' << operation << '\n';

    
  }
  return 0;
}
