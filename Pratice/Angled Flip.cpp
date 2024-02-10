
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define MOD 998244353
// const int MOD = 1e9 + 7;

ll expo(ll a, ll b, ll mod)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b >>= 1;
  }
  return res;
}


#define MAX 100010

ll a[MAX], b[MAX];

int length[MAX];

bool Check(int& t1,int& t2) {
	return a[t1]*b[t2] > b[t1]*a[t2];
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    int n;cin>>n;
    for (ll i = 0; i < n; i++)
    {
      /* code */
      scanf("%Ld/%Ld",&a[i],&b[i]);

      length[i]=1;
    }

    for (int i = n-2; i >=0; i--)
    {
      /* code */
      int g=i+1;

      while(g<n and Check(g,i)){
        a[i]+=a[g];
        b[i]+=b[g];
        length[i]+=length[g];

        g+=length[g];
      }
    }


    for (ll i = 0; i < n; i++)
    {
      /* code */
      ll g=__gcd(a[i],b[i]);

      cout<<a[i]/g<<"/"<<b[i]/g<<endl;
    }
    cout<<endl;


    
    


    

  }

  return 0;
}


/*


Hi,

I hope this message finds you well! I came across the SDE Intern - 2024 (Link) at Expedia. As an aspiring Software Engineer, I admire the company's innovative work. If possible, could you kindly refer me? I'd greatly appreciate it!

Best regards,
Shahbaz Khan

Resume Link:
https://drive.google.com/file/d/1GWEPhW0xSo_SEXyfPfixQkT76R6srowC/view?usp=sharing


*/