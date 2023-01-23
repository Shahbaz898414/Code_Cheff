#include<bits/stdc++.h>
#define int long long
//This one's for my love FM
using namespace std;
int y2=1e9+7;

void solve(){
    int n;cin>>n;
    int a[n];
    map<int,int> mp1,mp;
    for(int i=0;i<n;i++){cin>>a[i];mp1[a[i]]++;}
    int ans[n+1];for(int i=0;i<=n;i++)ans[i]=0;
    for(int i=n-1;i>=0;i--){
        ans[i]=ans[i+1];
        ans[i]+=mp1[a[i]+1];
        ans[i]-=mp[a[i]-1];
        mp1[a[i]]--;
        mp[a[i]]++;
    }
    int an=0;
    for(int i=0;i<n;i++){
        an=max(an,ans[i]);
    }
    cout<<an<<"\n";
}


signed main(){
 #ifndef ONLINE_JUDGE
  freopen("./input.txt", "r", stdin);
  freopen("./output.txt", "w", stdout);
 #endif
  int t=1;
  cin>>t;
 
  for(int i=0;i<t;i++){
     //cout<<"Case #"<<i+1<<": ";
     solve();
     cout<<"\n";
  }
  return 0;
}