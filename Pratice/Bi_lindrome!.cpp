#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
    int n,a=0,b,c,x;cin>>n;

    string s;cin>>s;

    map<char,int> mp;

    for (int i = 0; i <n; i++) {
      mp[s[i]]++;
      if(mp[s[i]]>=2){
        a+=n-2;
        break;
      }
    }

    if(a==0){
      cout<<-1<<endl;
    }else cout<<a<<endl;

    // int mx=INT_MIN;

    // for(auto it:mp){
    //   mx=max(mx,it.second);
    // }

    // if(mx==1) cout<<-1<<endl;
    // else{
    //    cout<<n-mx<<endl;
    // }


   
    



    
    
   
    
	    
  }
  
  return 0;
}