#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, m;
    cin >> n >> m;

   
   vector<ll>  arr(n);

   for(ll i = 0; i < n; i++) {
       cin>>arr[i];
   }

   vector<ll> ans(n);

   set<int>  st;

   for (ll i = 0; i <n; i++) {
   
    if(st.empty()){
      for(ll j=1;j<=m;j++)  st.insert(j);
    }


    int num=st.count(arr[i])?arr[i]:*st.begin();
    ans[i]=num;

    st.erase(num);


   }



   for (ll i = 0; i < n; i++)
   {
    /* code */
    cout<<ans[i]<<" ";
   }

   cout<<endl;
   
   
   
   


  }
  return 0;
}
