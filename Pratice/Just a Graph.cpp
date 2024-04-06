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


shahbaz khan

12
23
we
34
sd


Hi,

I hope this message finds you well! I came across the Software Engineer I (https://careers.mastercard.com/us/en/job/MASRUSR217340EXTERNALENUS/Software-Engineer-I-Java-development?utm_medium=phenom-feeds&source=LINKEDIN&utm_source=linkedin) at MasterCard. As an aspiring Software Engineer, I admire the company's innovative work. If possible, could you kindly refer me? I'd greatly appreciate it!

Best regards,
Shahbaz Khan

Resume Link:
https://drive.google.com/file/d/1KtvsYeT5PYaj_gk8VTDHismkNZzeOu6z/view?usp=sharing


*/