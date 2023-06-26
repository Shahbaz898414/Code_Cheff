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
        cin>>n>>k;
        
        ll c1 = 0;
        ll c2 = 1; 
        
        vector<ll> v1; 
        vector<ll> v2{1} ;
        
        for(ll i=2;i<=n;i++){
            if(!prime[i]){
                v1.push_back(i); 
                c1++; 
            }
            
            else{
                if(i*2<=n){
                    v1.push_back(i);
                    c1++; 
                }
                
                else{
                    v2.push_back(i);
                    c2++; 
                }
            }
        }
        
        // cout<<c1<<" "<<c2<<endl; 
        
        if(k<=c2 or k>=c1){
            cout<<"YES"<<endl; 
            
            if(k<=c2){
                for(ll i=0;i<k;i++){
                    cout<<v2[i]<<" "; 
                }
                cout<<endl; 
            }
            
            else{
                for(auto &it: v1){
                    cout<<it<<" "; 
                }
                
                for(ll i=0;i<k-c1;i++){
                    cout<<v2[i]<<" "; 
                }
                
                cout<<endl; 
            }
        }
        
        else{
            cout<<"NO"<<endl; 
        }
        
        
    }
}

int main() {
    
    prime_sieve();
	solve();
	cout<<endl; 
}