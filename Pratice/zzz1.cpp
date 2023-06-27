#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int mod = 1e9 + 7;

bool binary_search(ll mian, vector<ll> &fjng, ll g)
{
  ll ans = 0;
  for (int i = 0; i < fjng.size(); i++)
  {
    if (fjng[i] < mian)
      ans += mian - fjng[i];
    else
      break;
  }
  return ans <= g;
}

 int maximumNumberOfStringPairs(vector<string>& v) {
        int len=v.size();
        
        map<string ,int>  mp;
        
        for(int i=0;i<len;i++) {
            string s=v[i];
            sort(s.begin(),s.end());
            
            mp[s]++;
        }
        
        int cnt=0;
        
        for(auto it:mp) {
            if(it.second>1) cnt++;
        }
        
        
        return cnt;
    }

int main()
{
  int t = 1;
  cin >> t;
  while (t--) {
    ll n,c1=0,c2=0,sum=0,ans=0;
		cin>>n;
		vector<ll>  v(n);
    int cnt[4]={0};
    for (ll i = 0; i < n; i++) {
      cin>>v[i];
      cnt[v[i]%4]++;
      sum+=v[i];
    }

    if(sum%4!=0){
      cout<<-1<<endl;
      continue;
    }

    if(cnt[1]>cnt[3]){
      ans=cnt[3];
      cnt[1]-=cnt[3];

      ans+=cnt[1]/2;
      cnt[2]+=cnt[1]/2;

      ans+=cnt[2]/2;
    }else if(cnt[1]<cnt[3]){
      ans=cnt[1];
      cnt[3]-=cnt[1];
      ans+=cnt[3]/2;
      cnt[2]+=cnt[3]/2;
      ans+=cnt[2]/2;
    }else{
      ans=cnt[1];
      ans+=cnt[2]/2;
    }


    cout<<ans<<endl;
  }
  return 0;
}