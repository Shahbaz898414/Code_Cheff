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

// void rotateMatrix(vector<vector<int>> &v, int n)
// {
//   for (int i = 0; i < n / 2; i++)
//   {
//     for (int j = i; j < n - i - 1; j++)
//     {
//       int ptr = v[i][j];
//       v[i][j] = v[n - 1 - j][i];
//       v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
//       v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
//       v[j][n - 1 - i] = ptr;
//     }
//   }
// }

signed main()
{

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll cnt;

    vector<double>  k(n),c(n);

    for (ll i = 0; i < n; i++)
      cin >> k[i];

    for (ll i = 0; i < n; i++)
      cin >> c[i];

    double A=0;

    for (int i = 0; i <n; i++)
    {
      /* code */
      A+=(k[i]*c[i]);
    }

    if(A<0){
      cout<<-1<<endl;
      continue;
    }

    double B=0;


    
  for (int i = 0; i < n; i++)
  {
    /* code */
    B+=((double)1.0/k[i]);

  }

  double lambda=sqrt(B)/(((double)2.0)*sqrt(A));
  double ans=0;

  for (int i = 0; i < n; i++)
  {
    /* code */
    k[i]=(double)1.0/(((double)2.0)*k[i]*lambda);
    ans+=k[i];
    k[i]=(k[i]*k[i])-c[i];
  }

  cout<<setprecision(12)<<fixed<<ans<<" ";
  

  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<k[i]<<" ";
  }
  
  cout<<endl;

  }
  return 0;
}

/*
12.0761472885 28.6000000000 2.4000000000 -3.2666666667 -5.9000000000
-1
3.6578682316 0.2566666667 -7.4133333333 7.1566666667
3.5802375027 15.5642936942 -2.1510203645
-1


*/