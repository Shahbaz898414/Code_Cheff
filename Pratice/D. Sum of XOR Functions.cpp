

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define eps 1e-9
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
// const ll n = 1e5 + 2;

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

const ll n = 1e5 + 2;

ll prime[n];

void prime_sieve()
{

  prime[0] = 0;
  prime[1] = 0;

  for (int i = 2; i < n; i++)
  {
    prime[i] = 1;
  }

  for (ll i = 2; i * i < n; i++)
  {
    if (prime[i] == 1)
    {
      for (int j = i * i; j < n; j += i)
      {
        prime[j] = 0;
      }
    }
  }
}

bool check(int GCD, int K)
{
  int max_prime = 1;
  for (int i = 2; i <= sqrt(GCD); i++)
  {
    while (GCD % i == 0)
    {
      GCD /= i;
      max_prime = max(max_prime, i);
    }
  }
  max_prime = max(max_prime, GCD);

  if (max_prime <= K)
    return true;
  else
    return false;
}

int conjugate(int x)
{
  int res = 0;
  bool ok = 0;
  for (int i = 30; i >= 0; i--)
  {
    if (x & (1 << i))
      ok = 1;
    else if (ok)
      res += (1 << i);
  }

  return res;
}

int msb(int x)
{
  for (int i = 30; i >= 0; i--)
  {
    if (x & (1 << i))
      return i;
  }
  return 0;
}

int power(int a, int n)
{
  int res = 1;
  while (n)
  {
    if (n & 1)
      res *= a;
    a *= a;
    n /= 2;
  }

  return res;
}

bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
  if (p1.first != p2.first)
    return p1.first > p2.first;
  return p1.second < p2.second;
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  ll t=1; 
  // cin >> t;

  while (t--) {

  //  string s;cin>>s;

  ll n;cin>>n;

  vector<ll>  ar(n);

  for (ll i = 0; i < n; i++)
  {
    
    cin>>ar[i];
  }


  for (ll bit = 0; bit < 30; bit++)
  {
    /* code */
    
  }
  
  

   


  }
}
