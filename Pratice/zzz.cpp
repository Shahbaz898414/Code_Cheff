#include<bits/stdc++.h> 
using namespace std;
typedef long long int ll ; 
const ll n = 1e5 + 2;

ll prime[n]; 

void prime_sieve(){

    prime[0] = 0;
    prime[1] = 0; 
        
    for(int i=2;i<n;i++){
        prime[i] = 1; 
    }
    
    for(ll i=2;i*i<n;i++){
        if(prime[i]==1){
            for(int j=i*i;j<n;j+=i){
                prime[j] = 0; 
            }
        }
    }
    
    
}


void solve(){
    ll t;
    cin>>t;
    
    
    while(t--){
        ll n,k;
        cin>>n;
        
        ll c1 = 0;
        ll c2 = 1; 
        
         vector<ll>  v1(n),v2(n);

         for (ll i = 0; i < n; i++)
         {
            /* code */
            cin>>v1[i];
         }

         for (ll i = 0; i < n; i++)
         {
            /* code */
            cin>>v2[i];
         }
         
         
        
        
    }
}

int main() {
    
    prime_sieve();
	solve();
	cout<<endl; 
}