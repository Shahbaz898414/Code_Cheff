#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll x,y,k;cin>>x>>y>>k;


    if(x>y){
       swap(x,y);
    }
    ll g=__gcd(x,y);

    if(k==1){
      cout<<g+x<<endl;
    }else{
      cout<<2*g<<endl;
    }
   


    
    
    
  }
  return 0;
}







