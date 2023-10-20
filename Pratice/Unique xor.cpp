#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n>>k;

    string s;
    cin >> s;

    vector<int>  cnt1(k);
    vector<int>  cnt0(k);


    for (int i =1; i <=n; i++) {
      if(s[i-1]=='0')  cnt0[i%k]++;
      if(s[i-1]=='1')  cnt1[i%k]++;
    }

    // for(auto it:cnt0){
    //   cout<<it<<" ";
    // }

    // cout<<endl;

    // for(auto it:cnt1){
    //   cout<<it<<" ";
    // }

    // cout<<endl;



    ll int ans1=0;
    ll int ans0=0;



    for (int i = 0; i < k; i++) {
      

      ans0+=(cnt1[i])/2+2*(cnt1[i]%2);


      ans1+=cnt0[i];


      if(cnt1[i]==0 and cnt0[i]!=0) ans1=1e12;


    }


    cout<<min(ans0,ans1)<<endl;
    
    
    
  }
  return 0;
}



