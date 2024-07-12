#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long


void solve()
{
  int n;cin>>n;
  vector<int> ar(n);
  for (int i = 0; i < n; i++)
  {
    /* code */
   cin>>ar[i];
  }
  

  set<int>  posMed;

  vector<int> b;
  // iota((b.begin(),b.end()),0);
  for (int i = 0; i <n; i++)
  {
    /* code */
    b.push_back(i);
  }

  // for(auto it:b){
  //   cout<<it<<" ";
  // }

  // cout<<endl;

  sort(b.begin(),b.end(),[&](const int &x, const int &y)->bool{
    if(ar[x]!=ar[y]){
      return ar[x]<ar[y];
    }

    return x<y;
  });

  vector<int>  rest(n,1);

  int cntLargeOrEqual=n,cntSegSmall=0;
  for(auto &idx:b){
    if(cntLargeOrEqual>cntSegSmall){
      posMed.insert(ar[idx]);
    }

    cntLargeOrEqual--;
    rest[idx]=0;
    cntSegSmall++;

    if(idx>0 and rest[idx-1]==0){
      cntSegSmall--;
    }

    if(idx<n-1 and rest[idx+1]==0){
      cntSegSmall--;
    }
  }

  string s;

  for(auto &it:ar){
    if(posMed.count(it)){
      s+="1";
    }else {
      s+="0";
    }
  }

  cout<<s<<endl;


  

 
}

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {

    solve();
  }
  return 0;
}
