<<<<<<< HEAD
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void qwe()
{
  ll w;
  cin >> w;
  ll v[w];
  map<ll, ll> qw, tr;
  for (ll i = 0; i < w; i++)
  {
    cin >> v[i];
    qw[v[i]]++;
  }
  ll we[w + 1];
  for (ll i = 0; i <= w; i++)
    we[i] = 0;
  for (ll i = w - 1; i >= 0; i--)
  {
    we[i] = we[i + 1];
    we[i] += qw[v[i] + 1];
    we[i] -= tr[v[i] - 1];
    qw[v[i]]--;
    tr[v[i]]++;
  }
  ll an = 0;
  for (ll i = 0; i < w; i++)
  {
    an = max(an, we[i]);
  }
  cout << an << "\n";
}
signed main()
{

  ll t = 1;
  cin >> t;
  while (t--) {
    ll n,m;cin>>n>>m;

    int cp1=0,cp2=0;
   for (int i = 0; i < n; i++)
   {
    /* code */
    ll x,y;cin>>x>>y;
    if(x==m) cp1++;

    if(y==m) cp2++;
   }

   if(cp1>0 and cp2>0)  {
    cout<<"YES"<<endl;
    continue;
   }

   cout<<"NO"<<endl;
   
  }
  return 0;
=======
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void qwe()
{
  ll w;
  cin >> w;
  ll v[w];
  map<ll, ll> qw, tr;
  for (ll i = 0; i < w; i++)
  {
    cin >> v[i];
    qw[v[i]]++;
  }
  ll we[w + 1];
  for (ll i = 0; i <= w; i++)
    we[i] = 0;
  for (ll i = w - 1; i >= 0; i--)
  {
    we[i] = we[i + 1];
    we[i] += qw[v[i] + 1];
    we[i] -= tr[v[i] - 1];
    qw[v[i]]--;
    tr[v[i]]++;
  }
  ll an = 0;
  for (ll i = 0; i < w; i++)
  {
    an = max(an, we[i]);
  }
  cout << an << "\n";
}
signed main()
{

  ll t = 1;
  cin >> t;
  while (t--) {
    ll n,m;cin>>n>>m;

    int cp1=0,cp2=0;
   for (int i = 0; i < n; i++)
   {
    /* code */
    ll x,y;cin>>x>>y;
    if(x==m) cp1++;

    if(y==m) cp2++;
   }

   if(cp1>0 and cp2>0)  {
    cout<<"YES"<<endl;
    continue;
   }

   cout<<"NO"<<endl;
   
  }
  return 0;
>>>>>>> origin/main
}