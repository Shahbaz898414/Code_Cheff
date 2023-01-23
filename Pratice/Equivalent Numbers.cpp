


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll a, ll p) {
    ll c=0;
    while((a%p)==0){
        a=a/p;
        c++;
    }
    return c;
}
ll gcd(ll a, ll b) {
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a, b, a1, b1, i, j, lcm, x, y, p1, p2, q1, q2;
    ll small_fac[1000001];
    
    for(i=1; i<=1000000; i++){
        small_fac[i]=i;
    }
    
    for(i=2; i<=1000000; i++)
    {
        if(small_fac[i]==i){
            for(j=i*i; j<=1000000; j+=i){
                if(small_fac[j]==j){
                    small_fac[j]=i;
                }
            }
        }
    }
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>a>>b;
        
        p1=small_fac[a];
        p2=small_fac[b];
   
        
        if(p1!=p2){
            cout<<"NO\n";
            continue;
        }
        
             
        q1=power(a, p1);
        q2=power(b, p2);
        
        lcm=(q1*q2)/gcd(max(q1, q2), min(q1, q2));
        
        x=lcm/q1;
        y=lcm/q2;
        
        a1=b1=1;
        
        for(i=1; i<=x; i++){
            a1=(a1*a)%mod;
        }
        for(i=1; i<=y; i++){
            b1=(b1*b)%mod;
        }
        
        //cout<<a1<<" "<<b1<<"\n";
        
        if(a1==b1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
}



