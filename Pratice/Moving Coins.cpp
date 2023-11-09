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

    vector<int> pos(1001, 0);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int x, j = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      pos[x] = 1;
    }

    // for (ll i =1; i < 100; i++) {
     
    //   if(pos[i]==1)
    //      cout<<i<<" ";
    // }
    // cout<<endl;

    vector<int> arr;
    

    for (int i = x; i > 0; i--)
    {
      if (pos[i] == 1)
      {
        j++;
      }
      else{
        cout<<j<<" ";
        
        ans += 1 + (j - 1) / k;
        arr.push_back(ans); 
      }
    }

    cout<<endl;

    for(auto it:arr)  cout<<it<<" ";
    cout<<endl;

      
    cout << ans << endl;


  }
  return 0;
}



