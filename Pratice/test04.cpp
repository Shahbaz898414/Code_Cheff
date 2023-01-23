
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

int countDivisors(int n)
{
  int cnt = 0;

  vector<int> v;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      // If divisors are equal,
      // count only one
      if (n / i == i)
      {
        // cnt++;
        v.pb(i);
      }

      else
      {
        v.pb(i);
        v.pb(n / i);
      }
      // cnt = cnt + 2;
    }
  }

  return cnt;
}

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

vector<int> f(int n, int k, int s)
{
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    /* code */
    int x = (s % k + k) % k;
    if (x != 0 and x != 1 and x != -1)
      return {-2};
    v.pb(x);
    s = (s - x) / k;
  }

  return v;
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

void solve(){
    int n;cin>>n;
    int a[n];
    map<int,int> mp1,mp;
    for(int i=0;i<n;i++){cin>>a[i];mp1[a[i]]++;}
    int ans[n+1];for(int i=0;i<=n;i++)ans[i]=0;
    for(int i=n-1;i>=0;i--){
        ans[i]=ans[i+1];
        ans[i]+=mp1[a[i]+1];
        ans[i]-=mp[a[i]-1];
        mp1[a[i]]--;
        mp[a[i]]++;
    }
    int an=0;
    for(int i=0;i<n;i++){
        an=max(an,ans[i]);
    }
    cout<<an<<"\n";
}

ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

const ll NRR = 2e5 + 1;
ll arr[NRR][19];

int32_t main()
{
  fast
      ll t;
  cin >> t;
  while (t--) {
   
  }

  return 0;
}
