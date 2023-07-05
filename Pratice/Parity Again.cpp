#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
 
int main()
{
    
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	set<ll>::iterator it;
	while(t--)
    {
        ll n;
        cin>>n;
        set<ll> s;
        ll e=0,o=0;
        while(n--)
        {
            ll x;
            cin>>x;
            if(s.find(x)!=s.end())
            {
                cout<<e<<" "<<o<<"\n";
                continue;
            }
            set<ll> temp;
            for(it=s.begin();it!=s.end();it++)
            {
                ll y=*it;
                ll val=(x^y);
                 if(s.find(val)!=s.end()) continue;  
                ll cnt=__builtin_popcount(val);
                if(cnt%2)
                    o++;
                else
                    e++;
                      
                temp.insert(val);
            }
            for(it=temp.begin();it!=temp.end();it++)
            {
                s.insert((*it));
            }
            s.insert(x);
            ll cnt=__builtin_popcount(x);
            if(cnt%2)
                o++;
            else
                e++;
            cout<<e<<" "<<o<<"\n";
        }
    }
    return 0;
}