#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int> st;

int main() {
  ll t;cin>>t;

  while(t--){
    int n;cin>>n;
    vector<pair<string,string>> v;

    map<string,int> mp;

    for (int i=0; i<n;i++) {
        string s,d;cin>>s>>d;

        v.push_back({s,d});
        mp[s]++;
    } 

   

    
    

    for(auto it:v) {
      if(mp[it.first]>1){
        cout<<it.first<<" "<<it.second<<endl;
      }else{
        cout<<it.first<<endl;
      }
    }
    
  }

}