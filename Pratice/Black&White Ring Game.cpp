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

bool prime(long long int n)
{
  for (int i = 2; i <= sqrt(n);)
  {
    if (n % i == 0)
      return false;
    if (i == 2)
      i++;
    else
      i += 2;
  }
  if (n == 1 or n == 0)
    return false;
  return true;
}

int add(ll a, ll b)
{
  return ((a % mod) + (b % mod)) % mod;
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

int32_t main()
{
  fast
      // your code goes here

  ll t; cin >> t;
  while (t-- ) { 
     ll n; cin>>n;     
	   vector<ll>  a(n);
     for (ll i = 0; i < n; i++){
      cin>>a[i];
     }

     ll z=0,o=0;

     for (ll i=0; i <n-1; i++){
      if(a[i]==a[i+1]) {
        if(a[i]==0) {
          z++;
        }else {
          o++;
        }
      }
     }

    //  cout<<o<<" "<<z<<endl;
     
     if(a[0]==a[n-1])  {
      if(a[0]==0) {
        z++;
      }else o++;
     }

     ll k=min(z,o);

     if(k%2==0)  cout<<"BOB"<<endl;
     else cout<<"ALICE"<<endl;
     
  }

  return 0;
}
