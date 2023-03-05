<<<<<<< HEAD
#include <bits/stdc++.h> 
using namespace std; 
#define int long long 
#define mod 1000000007 
 
int mul(int a, int b) 
{ 
    return ((a % mod) * (b % mod)) % mod; 
} 
 
int binpow(int a, int b) 
{ 
    if (b == 0) 
        return 1; 
    int tmp = binpow(a, b / 2); 
    tmp = mul(tmp, tmp); 
    if (b % 2) 
        return mul(tmp, a); 
    return tmp; 
} 
 
int mod_inverse(int a, int m = mod) 
{ 
    return binpow(a, m - 2); // using fermat little's theorem 
} 
 
const int sz = 2e5 + 1; 
int fact[sz], invfact[sz]; 
void precompute() 
{ 
    fact[0] = invfact[0] = 1; 
    for (int i = 1; i < sz; i++) 
    { 
        fact[i] = mul(fact[i - 1], i); 
        invfact[i] = mul(invfact[i - 1], mod_inverse(i)); 
    } 
} 
void solve() 
{ 
    for (int i = 1; i < 1000000; i++)
    {
        /* code */
        if(i%13==0) cout<<i<<endl;
    }
     
} 
 
int32_t main() 
{ 
    precompute(); 
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    // int T = 1; 
    // cin >> T; 
 
    // while (T--) 
        solve(); 
=======
#include <bits/stdc++.h> 
using namespace std; 
#define int long long 
#define mod 1000000007 
 
int mul(int a, int b) 
{ 
    return ((a % mod) * (b % mod)) % mod; 
} 
 
int binpow(int a, int b) 
{ 
    if (b == 0) 
        return 1; 
    int tmp = binpow(a, b / 2); 
    tmp = mul(tmp, tmp); 
    if (b % 2) 
        return mul(tmp, a); 
    return tmp; 
} 
 
int mod_inverse(int a, int m = mod) 
{ 
    return binpow(a, m - 2); // using fermat little's theorem 
} 
 
const int sz = 2e5 + 1; 
int fact[sz], invfact[sz]; 
void precompute() 
{ 
    fact[0] = invfact[0] = 1; 
    for (int i = 1; i < sz; i++) 
    { 
        fact[i] = mul(fact[i - 1], i); 
        invfact[i] = mul(invfact[i - 1], mod_inverse(i)); 
    } 
} 
void solve() 
{ 
    for (int i = 1; i < 1000000; i++)
    {
        /* code */
        if(i%13==0) cout<<i<<endl;
    }
     
} 
 
int32_t main() 
{ 
    precompute(); 
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    // int T = 1; 
    // cin >> T; 
 
    // while (T--) 
        solve(); 
>>>>>>> origin/main
}// min hamming