#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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

long long subarrayXor(int arr[], int n, int m)
{
  long long ans = 0;
  int *xorArr = new int[n];
  unordered_map<int, int> mp;
  xorArr[0] = arr[0];

  for (int i = 1; i < n; i++)
    xorArr[i] = xorArr[i - 1] ^ arr[i];
  for (int i = 0; i < n; i++)
  {

    int tmp = m ^ xorArr[i];
    ans = ans + ((long long)mp[tmp]);

    if (xorArr[i] == m)
      ans++;

    mp[xorArr[i]]++;
  }

  return ans;
}

ll modexp(ll a, ll b)
{
  ll ans = 1;

  while (b > 0)
  {
    if ((b % 2) == 1)
    {
      ans = (ans * a) % mod;
    }
    b /= 2;
    a = (a * a) % mod;
  }
  return ans;
}

ll count(ll m, ll i)
{
  ll ans = ((m >> (i + 1)) << i);

  if ((m >> i) & 1)
  {
    ans = ans + (m & ((1ll << i) - 1));
  }

  return ans;
}

int32_t main() {
  fast
  ll t, n, m, i, j, ans, k;

  cin >> t;

  for (; t--;) {
    cin >> n >> m;
    // ans=0;
    // int a[n];
    // for (int i = 0; i <n; i++) {
    //   cin>>a[i];
    // }

    for (i = 0, k = 1; k <= m; k = k * 2, i++)
    {
      j = count(m + 1, i);

      j = modexp(j, n);

      ans = (ans + ((j * k) % mod)) % mod;
    }
    cout << ans << "\n";
  }
}
