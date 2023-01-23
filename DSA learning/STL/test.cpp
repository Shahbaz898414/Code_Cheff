#include<bits/stdc++.h>
#define ll long long
using namespace std;

// stack<int> st;

int main() {

  map<int,string> mp;
 
  mp[2]="dskks";
  mp[5]="ksk";
  mp[3]="sjaakj";
  mp[1]="dkskdsk";

  //  map<int,string> ::iterator it;

  // for( it=mp.begin();it!=mp.end();it++){
  //   cout<<(*it).first<<" "<<(*it).second<<endl;
  // } 
  // cout<<endl;

  for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;

  unordered_map<int,string> mp2;
  cout<<endl;
 
  mp2[5]="dskks";
  mp2[3]="ksk";
  mp2[2]="sjaakj";
  mp2[4]="dkskdsk";

  for(auto it:mp2) cout<<it.first<<" "<<it.second<<endl;



}