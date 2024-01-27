#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

const int inf = 1ll << 60;

int modInverse(int A, int M = MOD)
{
  int m0 = M;
  int y = 0, x = 1;
  if (M == 1)
    return 0;
  while (A > 1)
  {
    int q = A / M;
    int t = M;
    M = A % M, A = t;
    t = y;
    y = x - q * y;
    x = t;
  }
  if (x < 0)
    x += m0;
  return x;
}

void solve()
{

  ll n, x, z;
  cin >> n >> x >> z;
  vector<ll> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  ll k = z % x;
  k = x - k;
  if (k == x)
  {
    cout << z / k << endl;
  }
  else
  {

    vector<ll> curr(x, 1e16), prev(x, 1e16);

    for (int i = n - 1; i >= 0; i--)
    {
      for (int j = 0; j < x; j++)
      {
        if (arr[i] % x == j)
        {
          curr[j] = arr[i];
        }
        else
        {
          ll a = arr[i] % x;
          if (a < j)
          {
            a = j - a;
          }
          else
          {
            a = x - a + j;
          }
          a %= x;
          curr[j] = min(prev[j], prev[a] + arr[i]);
        }
      }
      prev = curr;
    }

    ll ans = curr[k];
    if (ans > 1e15)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << (z + ans) / x << endl;
      ;
    }
  }
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  ll t;
  cin>>t;
  while(t--)
  {
   ll n,x,z;
   cin>>n>>x>>z;
   vector<ll> arr(n);
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   ll k=z%x;
   k=x-k;

   if(k==x){
      cout<<z/k<<endl;
   }
   else
   {

       vector<ll> curr(x,1e16),prev(x,1e16);


       for(int i=n-1;i>=0;i--)
       {
           for(int j=0;j<x;j++)
           {
               if(arr[i]%x==j){curr[j]=arr[i];}
               else
               {
                   ll a=arr[i]%x;
                   if(a<j){a=j-a;}
                   else{a=x-a+j;}
                    a%=x;
                   curr[j]=min(prev[j],prev[a]+arr[i]);
               }
           }
           prev=curr;
       }


       ll ans=curr[k];

       if(ans>1e15){cout<<-1<<endl;}
        else
        {
            cout<<(z+ans)/x<<endl;;
        }

     }
  }
  return 0;
}


*/