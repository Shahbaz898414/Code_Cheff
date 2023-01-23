#include<bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
      int n,k;cin>>n>>k;
    int res=1,mes=1;
    int g=n-k;
    for (int i = 1; i <=n-k; i++)
    {
      mes*=i;
    }
    
      for(int i=1;i<=n;i++){
        res*=i;
      }

      // cout<<res<<endl;

      int u=res/mes;
      cout<<u<<endl;

    }
}