<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dp[111][111];

int solve(int i,vector<int> wa,vector<int> val,int b){
  if(b==0 ||i<0)  return 0;

  if(dp[i][b]!=-1){
    return dp[i][b];
  }

  int ans=solve(i-1,wa,val,b);
  // int taken=INT_MIN;
  if(wa[i]<=b){
    ans=max(ans,val[i]+solve(i-1,wa,val,b-wa[i]));
  }

  return dp[i][b]=ans;
}

int main(){

  int t;cin>>t;
  while(t--) {
    int n,a=0,b,c,x;cin>>n>>b;

   vector<int> wa(n),val(n);

   for (int i = 0; i < n; i++) {
    int x,y,z;cin>>x>>y>>z;
     val[i]=x*y;
     wa[i]=z;
   }

    for(int i=0;i<n+5;++i)
		{
			for(int j=0;j<b+5;++j)
			{
				dp[i][j]=-1;
			}
		}

  //  vector<vector<int>> dp(n+5,vector<int>(b+5,-1));

   cout<<solve(n-1,wa,val,b)<<endl;

	    
  }
  
  return 0;
=======
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dp[111][111];

int solve(int i,vector<int> wa,vector<int> val,int b){
  if(b==0 ||i<0)  return 0;

  if(dp[i][b]!=-1){
    return dp[i][b];
  }

  int ans=solve(i-1,wa,val,b);
  // int taken=INT_MIN;
  if(wa[i]<=b){
    ans=max(ans,val[i]+solve(i-1,wa,val,b-wa[i]));
  }

  return dp[i][b]=ans;
}

int main(){

  int t;cin>>t;
  while(t--) {
    int n,a=0,b,c,x;cin>>n>>b;

   vector<int> wa(n),val(n);

   for (int i = 0; i < n; i++) {
    int x,y,z;cin>>x>>y>>z;
     val[i]=x*y;
     wa[i]=z;
   }

    for(int i=0;i<n+5;++i)
		{
			for(int j=0;j<b+5;++j)
			{
				dp[i][j]=-1;
			}
		}

  //  vector<vector<int>> dp(n+5,vector<int>(b+5,-1));

   cout<<solve(n-1,wa,val,b)<<endl;

	    
  }
  
  return 0;
>>>>>>> origin/main
}