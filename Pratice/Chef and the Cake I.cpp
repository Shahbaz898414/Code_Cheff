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
     ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
       
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

