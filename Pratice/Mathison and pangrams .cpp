#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main() {

 
  

  int t;cin>>t;
  while(t--){
   int a[26],sum=0,fre[27]={0};
    set<char> set;

   for (int i=0; i<26; i++) {
      cin>>a[i];
      set.insert(a[i]+'a');
   }
   string s;
   cin>>s;

  // for (char i='a'; i<='z'; i++) {
  //   set.insert(i);
  // }

  // for(auto it:set){
  //   cout<<it<<" ";
  // }
  // cout<<endl;

  vector<int> v;
   
   for (int i=0; i<s.size(); i++) {
      fre[s[i]-'a']++;
   }

   for (int i = 0; i <26; i++)
   {
    if(fre[i]==0){
      v.push_back(a[i]);
    }
   }

   for(auto it:v){
    sum+=it;
   }
   

   cout<<sum<<endl;
   
   
  }
 
  
  return 0;
}

