
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// #define MOD 998244353
const int m = 1e9 + 7;



ll binexp(ll a, ll b, ll m)
{
  ll result = 1;
  while (b > 0)
  {
    if (b & 1)
    {
      result = (result * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b >>= 1;
  }
  return result;
}


#define MAX 100010


ll a[MAX], b[MAX];


int length[MAX];



int main()
{
  int t;
  cin >> t;

  while (t--) {


    ll n, w;cin >> n >> w;



  


  }


  return 0;
}



/*

vector<vector<int>> ans;




*/