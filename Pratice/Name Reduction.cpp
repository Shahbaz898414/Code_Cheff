#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
    int n;
	    string a,b;
	    cin>>a>>b;
	    string ans=a+b;
	    cin>>n;
	    string s;
	    for(int i=0;i<n;i++) {
	        string c;
	        cin>>c;
	        s+=c;
	    }
	    if(s.size()>ans.size()) {
        cout<<"NO"<<endl;
        continue;
      }
	    // return "NO";

      bool fl=true;
	    
	    vector<int> mon(26,0),tue(26,0);
	    for(auto i:ans) mon[i-'a']++;
	    for(auto i:s) tue[i-'a']++;

      // for(auto it:mon) cout<<it<<" ";
      // cout<<endl;
      // for(auto it:tue) cout<<it<<" ";
      // cout<<endl;

	    for(auto i:s) {
	        if(!mon[i-'a'] || mon[i-'a']<tue[i-'a']){
            fl=false;
          }
	    }
	    

      if(fl)  cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

  
  }
  
  return 0;
}