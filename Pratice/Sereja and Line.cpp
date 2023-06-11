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

const long long inf = 1e18;
const int MOD = 1e9 + 7;
const int MAX = 1e6;

const int N = 1000005;

long long fact[N], Invfact[N];

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

long long bipow(long long x, long long y, long long mod)
{
  long long ans = 1;
  while (y > 0)
  {
    if (y % 2 == 1)
      ans = (ans * x) % mod;
    y = y / 2;
    x = (x * x) % mod;
  }
  return ans;
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

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

vector<bool> is_prime(10001, 1);
vector<int> primes;

// ll fact[1000001];

ll power(ll a, ll b)
{
  ll ans = 1;
  a %= mod;
  while (b > 0)
  {
    if (b % 2)
      ans = ans * a % mod;
    a = a * a % mod;
    b /= 2;
  }
  return ans;
}

int mod_pow(int a, int b)
{
  int x = 1;
  while (b)
  {
    if (b & 1)
      (x *= a) %= mod;
    (a *= a) %= mod;
    b >>= 1;
  }
  return x;
}

void precal()
{
  fact[0] = 1;
  for (int i = 1; i < N; i++)
    fact[i] = (i * fact[i - 1]) % MOD;
  Invfact[N - 1] = bipow(fact[N - 1], MOD - 2, MOD);
  for (int i = N - 2; i >= 0; i--)
    Invfact[i] = ((i + 1) * Invfact[i + 1]) % MOD;
}

long long ncr(int n, int r)
{
  if (r > n || n < 0 || r < 0)
    return 0;
  return (fact[n] * Invfact[r] % MOD) * Invfact[n - r] % MOD;
}

void seive()
{
  is_prime[0] = 0;
  is_prime[1] = 0;
  for (int i = 2; i < 10001; i++)
  {

    if (is_prime[i])
    {
      primes.push_back(i);
      for (int j = i + i; j < 10001; j += i)
      {
        is_prime[j] = 0;
      }
    }
  }
}

void sortArray(int a[], int n)
{
  vector<int> arr(a, a + n);
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++)
    a[i] = arr[i];
}

// void dfs(vector<vector<int>> &adj, int i)
// {
//   vis[i] = 1;
//   // cnt++;
//   for (auto nbr : adj[i])
//   {
//     if (vis[nbr] == 0)
//     {
//       dfs(adj, nbr);
//     }
//   }
// }

int main()
{
  precal();
  int len;
  cin >> len;
  while (len--) {
    int n; cin >> n;
    int a[n+1];
    for (int i = 1; i <=n; i++){

    cin >> a[i]; }

    


    // [2, 4, 0, 3, 1].

    /*
    05124    min=2
    */

  }
}
