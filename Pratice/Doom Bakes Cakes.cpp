

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

void solve() {
  ll k; cin >> k;
    string s; cin >> s;
    ll n = s.size();
    if(n == 1)
    {
        char ans = (s[0] == '?' ? '0': s[0]);
        cout << ans << endl;
        return;
    }


    for (ll i = 0; i < n; i++)
    {
        if(s[(i+1)%n] == s[i] && s[i] != '?')
        {
            cout << "NO\n";
            return;
        }
    }


    if(k == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == '?')
                s[i] = '0';
        }
        for (ll i = 0; i < n; i++)
        {
            if(s[(i+1)%n] == s[i])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << s << endl;
    }
    if(k == 2)
    {
        if(n%2)
        {
            cout << "NO\n";
        }
        else
        {
            string s1 = "";
            string s2 = "";
            for (ll i = 0; i < n/2; i++)
            {
                s1 += "01";
                s2 += "10";
            }
            // cout << s1 << " " << s2 << endl;
            bool not1 = false;
            for (ll i = 0; i < n; i++)
            {
                if(s[i] != '?' && s[i] != s1[i])
                {
                    not1 = true;
                    break;
                }
            }
            if(not1 == false)
            {
                cout << s1 << endl;
            }
            else
            {
                bool not2 = false;
                for (ll i = 0; i < n; i++)
                {
                    if(s[i] != '?' && s[i] != s2[i])
                    {
                        not2 = true;
                        break;
                    }
                }
                if(not2 == false)
                {
                    cout << s2 << endl;
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    if(k >= 3)
    {
        for (ll i = 0; i < n; i++)
        {
            if(s[i] == '?')
            {
                if(s[(i-1+n)%n] != '0' && s[(i+1)%n] != '0')
                {
                    s[i] = '0';
                }
                else if(s[(i-1+n)%n] != '1' && s[(i+1)%n] != '1')
                {
                    s[i] = '1';
                }
                else if(s[(i-1+n)%n] != '2' && s[(i+1)%n] != '2')
                {
                    s[i] = '2';
                }
            }
        }
        cout << s << endl;
    }
}

int32_t main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll int inv2 = 500000004;
  ll int inv4 = 250000002;

  ll t;
  cin >> t;

  while (t--)
  {
    
    solve();

  }
}


