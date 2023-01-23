#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string rotate_str(string s,int n){
    char c = s[n-1];
    for(int i=n-1;i>=1;i--){
        s[i]=s[i-1];
    }
    s[0]=c;
    return s;
}

int32_t main() {
	ll t; cin >> t;
    while (t--) {
      ll n;cin>>n; ll a[n];
      for (int i = 0; i <n; i++) cin>>a[i];
      ll val=a[0];
      for(int i=1;i<n;i++){
        val=__gcd(a[i],val);
      }

      if(val!=1){
        cout<<n<<endl;
      }else if(val==1){
        vector<ll>prefix;
        vector<ll>suffix;
            ll wow=a[0];
            prefix.push_back(wow);
            for(ll l=1;l<n;l++){
                wow=__gcd(wow,a[l]);
                prefix.push_back(wow);
            }
            ll vinay=a[n-1];
            suffix.push_back(vinay);
            for(ll u=n-2;u>=0;u--){
                vinay=__gcd(vinay,a[u]);
                suffix.push_back(vinay);
            }
            ll shivansh=0;
            ll lol=0;
            if(suffix[n-2]!=1)
            shivansh++;
            for(ll g=1;g<n-1;g++){
                lol=__gcd(prefix[g-1],suffix[n-g-2]);
                if(lol>1){
                    shivansh+=1;
                }
            }
            if(prefix[n-2]!=1)
            shivansh++;
            cout<<shivansh<<endl;
      }
       
    }
    
  



    
    
	
	return 0;
}

/*
              int c=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='-'){
                  continue;
                } 
                
                ans+=s[i];
                c++;
                if(c%k==0){
                    ans+='-';
                }
            }

*/

