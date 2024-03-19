#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int MOD = 1000000007;




int main()
{

  ll t;cin>>t;

  while(t--){
    ll n;cin>>n;

    vector<ll>  arr(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }

    vector<ll>  x(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      x[i]=arr[i]-(i+1);
    }

    bool fl=1;

    for (ll i = 1; i < n; i++)
    {
      /* code */
      if(x[i]!=x[0]){
        fl=0;
        break;
      }
    }

    if(fl)  cout<<n<<endl;
    else cout<<1<<endl;
    
    
    
  }

 
  return 0;
}


/*

Hi,

I hope this message finds you well! I came across the Software Engineer ( https://www.deshawindia.com/careers/all-positions-in-software-development-2614 ) at D. E. Shaw & Co. As an aspiring Software Engineer, I admire the company's innovative work. If possible, could you kindly refer me? I'd greatly appreciate it!

Best regards,
Shahbaz Khan

Resume Link :-
https://drive.google.com/file/d/1dCI7ysrWVAlzk4qgI_PArpdtSatVI_oq/view?usp=sharing


*/