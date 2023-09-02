#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lld long long int

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
    ll num = sqrt(n);
    ll num2 = n / num;
    ll left = n - num * num2;
    for (int i = 0; i < num; i++)
    
      cout << "X";
    
    for (int i = 0; i < num2 - left; i++)
    
      cout << "D";
    
    if (left != 0)
    {
      cout << "X";
      for (int i = 0; i < left; i++)
      {
        cout << "D";
      }
    }
    cout << endl;
  }

  return 0;
}