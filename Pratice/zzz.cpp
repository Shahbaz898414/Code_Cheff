#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t; cin>>t;    

    while(t--) {
      ll n,m;cin>>n>>m;

      vector<ll>  arr(n);

      ll sum=0;

      for (ll i = 0; i <n; i++)
      {
        /* code */
        cin>>arr[i];
        sum+=arr[i];
      }

      ll low=0;

      ll high=sum;

      ll ans=0;

      while(low<=high){
        ll mid = low + (high - low) / 2;
        bool fl=true;

        for(auto it:arr){
          if(it<=mid){
            continue;
          }else {
            if(m>it){
              m-=it;
            }else {
              fl=false;
              break;
            }
          }
        }


        if(fl){
          ans=mid;
          high=mid-1;
          
        }else{
          low=mid+1;
        }
      }


      cout<<ans<<endl;
        
    }
	return 0;
}
