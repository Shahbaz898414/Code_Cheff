#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define double long double
#define endl '\n'

const int MOD = 1000000007;

const int inf = 1ll<<60;

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

  int n, x, z;
  cin >> n >> x >> z;

  // int a[n], brr[n];
  vector<int> a(n);

  

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  if(z%x==0){
    cout<<z/x<<endl;
    return;
  }

   vector<vector<int>> dp(n+1,vector<int> (x,inf));


    dp[0][0] = 0;
    for (int i = 1; i <=n; i++) {
        for (int j = 0; j < x; j++) {
            dp[i][j] = min(dp[i-1][j],dp[i-1][((j-a[i-1])%x + x)%x] + a[i-1]);
        }
    }


    int req = z%x;


    if(dp[n][x-req]==inf) {

        cout<<-1<<endl;
    
    } else {
        cout<< (z + dp[n][x-req])/x <<endl;
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
	 if(k==x){cout<<z/k<<endl;}
	 else
	 {
	   //  vector<vector<ll>> dp(n+1,vector<ll>(x,1e16));
	     vector<ll> curr(x,1e16),prev(x,1e16);
	 
// 	  cout<<k<<endl;
// 	 long long ans=solve(k,0,dp,arr,n,x);
// 	 if(ans>1e15){cout<<-1<<endl;}
// 	 else
// 	 {
// 	     cout<<(z+ans)/x<<endl;;
// 	 }
       
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