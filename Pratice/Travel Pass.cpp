#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

  int t;cin>>t;
  while(t--){
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    int cnt=0,zer=0,one=0;

    for(int i = 0; i <n; i++)
    {
      if(s[i]=='0')
      zer++;
      else
      one++;
    }
    
    cout<<zer*a+one*b<<endl;
    
    
  }
 
  
  return 0;
}

