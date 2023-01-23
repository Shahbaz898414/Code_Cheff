#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

  int t;cin>>t;
  while(t--){
    int a,b,c=0,d=0;cin>>a>>b;
    string s;cin>>s;

    set<int> ser;

    ser.insert(b);
    for (int i = 0; i <a; i++) {
      if(s[i]=='R'){
        b++;
        ser.insert(b);
      }else{
        b--;
        ser.insert(b);
      }
    }

    cout<<ser.size()<<endl;
  }
 
  
  return 0;
}

