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


void solve() {


  int n; cin >> n;


  vector<int> arr(n);

  int cnt1=0,cnt2=0;


  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    if(i%2) cnt2+=arr[i];
    else cnt1+=arr[i];

  }


  if(n==1){
    if((cnt1+cnt2)>1){
      cout<<"Alice"<<endl;
      return;
    }

    cout<<"Bob"<<endl;
    return;
  }


  if((cnt1+cnt2)%2!=0){
    cout<<"Bob"<<endl;
    return;
  }

  if(cnt1%2 == 0){
		int a1=((cnt1+cnt2-2)/2);
		
		if(a1%2 != 0){
			cout<<"Bob"<<endl;
			return;
		}
		cout<<"Alice"<<endl;
		return;
	}
	else{
		
		int a1=((cnt1+cnt2-2)/2);
		
		if(a1%2 == 0){
			cout<<"Bob"<<endl;
			return;
		}
		cout<<"Alice"<<endl;
		return;
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
