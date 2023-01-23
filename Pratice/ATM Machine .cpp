#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  ll t;cin>>t;

  while(t-->0){

    ll n;cin>>n;

    ll a[n],odd=0,even=0,c=0;
    set<ll> s;
    bool p=false,q=false;

    for (int i =0; i < n; i++) {

      cin>>a[i];

      s.insert(a[i]);

      if(a[i]%2==0){
        even++;
      }else{
        odd++;
      }

      if(i%2==0){
        if(a[i]%2==0){
          // odd++;
          p=true;
        }
        else {
          even++;
        }
        
      }else{
        if(a[i]%2!=0){
          even++;
          q=true;
        }
        // else{
        //   //  odd++;
        // }
       
      }

    }

    if(s.size()==1){
      cout<<"YES"<<endl;
    }else if(p==true and q==true){
      cout<<"YES"<<endl;
    }else if( p==false and q==false){
      cout<<"NO"<<endl;
    }else{
      cout<<"NO"<<endl;

    }

    

   


    
      
  }

  return 0;
}

