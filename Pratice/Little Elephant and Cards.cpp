
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

vector<bool> is_prime(10001, 1);
vector<int> primes;

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

long long int powMod(long long int x, long long y, long long int m)
{
  long long int ans = 1;
  while (y != 0)
  {
    if (y & 1 == 1)
    {
      ans = ((ans % m) * (x % m)) % m;
    }
    y = y >> 1;
    x = ((x % m) * (x % m)) % m;
  }
  return ans;
}

bool cmp(pair<int, string> a, pair<int, string> b)
{
  return a.first > b.first;
}

ll fact[1100];

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

ll nck(int n, int k)
{
  ll nans = fact[n];
  ll kans = fact[n - k] * fact[k] % mod;
  return nans * power(kans, mod - 2) % mod;
}

int32_t main()
{

  int t;
  cin >> t;
  fact[0] = 1;
  for (int i = 1; i < 1100; i++)
    fact[i] = fact[i - 1] * i % mod;
  
  while (t--)
  {
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
      int ai;
      cin >> ai;
    }
    for (int i = (n / 2) + 1; i <= n; i++)
    {
      ans = (ans + nck(n, i)) % mod;
    }
    cout << ans << endl;
  }

  return 0;
}





/*

Little Elephant and Cards

Little Elephant from the Zoo of Lviv likes cards. He has N cards, each of which has one of 1000 colors. The colors are numbered from 1 to 1000.

Little Elephant and Big Hippo are playing the following game. At first Little Elephant takes some subset of cards, and Big Hippo takes the rest of them.
Here, Little Elephant can choose to take all of the cards, or none of the cards.

Then they play 1000 rounds: in round k (k = 1, 2, ... , 1000), they count the number of cards each has of the color k. Let Little Elephant has a cards of
the color k, and Big Hippo has b cards of the color k. Then if a > b Little Elephant scores | a-b| points, otherwise Big Hippo scores | a-b| points in this
round, where |x| denotes the absolute value of x.

You are given the number of cards N and the array C - list of colors of all N cards. Find the number of subsets (among all 2N subsets) for which Little
Elephant wins the game: that is, he gains more points than Big Hippo in total, if Little Elephant takes the subset at first. Since the answer can be large,
print it modulo 1000000007 (10^9+7).

Input

First line of the input contains single integer T - the number of test cases. Then T test cases follow.

First line of each test case contains single integer N. Second line contains N integers separated by space - the array C.

Output
For each test case, print the answer in one line.


*/