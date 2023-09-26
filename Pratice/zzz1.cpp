#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        ll main;

        main=(n*(n+1))/2;


        // if(x>main)  {
        //     cout<<"NO"<<endl;

        //     continue;
        // }

        //  ll sum1=0;
        //  ll sum2=0;

        //  for(int i=1;i<=k;i++){
        //     sum1+=i;
        //  }


        //  for(int i = n; i >=1; i--) {
        //     sum2+=i;
        //     k--;
        //     if(k<=0) break;
        //  }



        //  if(sum1>x or sum2<x) cout<<"NO"<<endl;
        //  else cout<<"YES"<<endl;

        if(k*(k+1)/2>x ||(n-k+1+n)*k/2<x){
            cout<<"NO"<<endl;
        }else  cout<<"YES"<<endl;
         
    }

    return 0;
}
