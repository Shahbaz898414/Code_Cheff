#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define md 1000000007

int main()
{

  // cout<<(2^3)<<" "<<(4^5)<<" "<<(6^7)<<" "<<(8^9)<<endl;
  int T = 1;
  // cin >> T;
  while (T--)
  {
    ll n, m, MIN;
    cin >> n >> m;

    map<string, int> Country, Chef;
    map<string, string> Origin;

    string out;

    while (n--)
    {
      string A, B;
      cin >> A >> B;
      Origin[A] = B;
    }

    while (m--)
    {
      string A;
      cin >> A;
      Chef[A]++;
      Country[Origin[A]]++;
    }

    MIN = 0;
    for (auto i : Country)
    {
      if (MIN < i.second)
      {
        MIN = i.second;
        out = i.first;
      }
    }

    cout << out << endl;
    MIN = 0;
    for (auto i : Chef)
    {
      if (MIN < i.second)
      {
        MIN = i.second;
        out = i.first;
      }
    }
    cout << out << endl;
  }

  return 0;
}
