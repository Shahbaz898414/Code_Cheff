#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()  {


  int t; cin >> t;

  while (t--) {
    ll n;cin>>n;

    vector<ll>  ar(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>ar[i];
    }

    ll q;cin>>q;
       

   

  }
  return 0;
}





/*



#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int a[maxn];
 
int main(){
    int t;
    scanf("%d", &t);
 
    for(int cs=1; cs<=t; cs++){
        int n;
        scanf("%d", &n);
        for(int i=1; i<=n; i++) scanf("%d", &a[i]);
 
        int Max = 0;
        for(int i=1; i<=n; i++) Max = max(Max, a[i]);
 
        vector<int> pos;
        for(int i=1; i<=n; i++) if(a[i] == Max) pos.push_back(i);
        pos.push_back(pos[0] + n);
 
        int ans = 0;
        int sz = n / 2;
        for(int i=1; i<pos.size(); i++) ans += max(0, pos[i] - pos[i-1] - sz);
 
        printf("%d\n", ans);
    }
}



*/