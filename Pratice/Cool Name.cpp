#include<bits/stdc++.h>
#define ll long long
using namespace std;




int main() {
  int t;cin>>t;
  while(t--) { 
    // ll n,m,k;cin>>n;
    string s;cin>>s;

    ll n=s.size();

    sort(s.begin(),s.end());
      ll sum=0;
    for (int i = 0; i < n; i++)
    {
      /* code */
      sum+=((i+1)*(s[i]-'a'+1));
    }

    cout<<sum<<endl;
    


  }
   


  return 0;
}