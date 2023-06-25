#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define line cout << endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define printv(v)                      \
  for (int i = 0; i < (v.size()); i++) \
  {                                    \
    cout << v[i] << " ";               \
  }                                    \
  line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define tk(x) \
  int x;      \
  cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif
template <class T>
void _print(T t)
{
  cerr << t;
}

template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}

template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(vector<vector<T>> v)
{
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++)
  {
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
  }
  cerr << "]";
}

template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

long long fgbv(long long x, long long y, long long p)
{
  long long ret = 1;
  while (y > 0)
  {
    if (y % 2 == 1)
    {
      ret = (ret * x) % p;
    }
    y /= 2;
    x = (x * x) % p;
  }
  return ret;
}
const int kjh = 1e5 + 1;

ll Q[kjh], W[kjh];
void fact()
{

  Q[0] = W[0] = 1;

  for (int i = 1; i < kjh; i++)
  {

    Q[i] = (i * Q[i - 1]) % mod;

    W[i] = fgbv(Q[i], mod - 2, mod);
  }
}

const long long inf = 1e18;
const int MOD = 998244353;
const int MAX = 1e6;

bool isValid(string s)
{
  int len = s.size();
  for (int i = 0; i < len / 2; i++)
  {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

ll bit(ll x, ll y)
{
  ll vnt = 1, vbg = x;
  while (y > 0)
  {
    if (y % 2)
      vnt *= vbg, vnt %= mod;
    vbg *= vbg, y /= 2, vbg %= mod;
  }
  return vnt;
}

void rotateMatrix(vector<vector<int>> &v, int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = i; j < n - i - 1; j++)
    {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}


ll f[55];
ll x,k,q;
ll solve(ll x,ll k, ll start) {
  if(x==0 && k==0) {
    return 1;
  }
  if(x==0 || k==0) {
    return 0;
  }
  if(x<0) {
    return 0;
  }
  if(x>f[start]*k) {
    return 0;
  }
  return (solve(x-f[start],k-1,start)+solve(x,k,start-1))%mod;
}

signed main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  f[0]=1;
f[1]=2;
ll i=2;
while(f[i-1]+f[i-2]<=1e9) {
  f[i]=f[i-1]+f[i-2];
  i++;
}
 
  ll start=i-1;

  ll t;
  cin >> t;

  while (t--)
  {
    cin>>x>>k;
    cout<<solve(x,k,start)<<endl;
  }

  return 0;
}

/*
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define MAX 200010
using namespace std;
const int mod=1e9+7;
ll f[55];
ll x,k,q;
long long solve(ll x,ll k, ll start) {
  if(x==0 && k==0) {
    return 1;
  }
  if(x==0 || k==0) {
    return 0;
  }
  if(x<0) {
    return 0;
  }
  if(x>f[start]*k) {
    return 0;
  }
  return (solve(x-f[start],k-1,start)+solve(x,k,start-1))%mod;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
f[0]=1;
f[1]=2;
ll i=2;
while(f[i-1]+f[i-2]<=1e9) {
  f[i]=f[i-1]+f[i-2];
  i++;
}
ll start=i-1;
cin>>q;
while(q--) {
  cin>>x>>k;
  cout<<solve(x,k,start)<<endl;
}
}

*/