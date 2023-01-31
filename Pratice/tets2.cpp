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

// const long long inf = 1e18;
// const int MOD = 998244353;
// const int MAX = 1e6;

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

// int binaryToDecimal(int n)
// {
//     int num = n;
//     int dec_value = 0;

//     // Initializing base value to 1, i.e 2^0
//     int base = 1;

//     int temp = num;
//     while (temp) {
//         int last_digit = temp % 10;
//         temp = temp / 10;

//         dec_value += last_digit * base;

//         base = base * 2;
//     }

//     return dec_value;
// }

ll jlk(ll w, ll z) 
{ 
    return ((w % mod) * (z % mod)) % mod; 
} 
 
ll yhgt(ll d, ll df) 
{ 
    if (df == 0) 
        return 1; 
    ll a = yhgt(d, df / 2); 

    a = jlk(a, a); 
    if (df % 2) 
        return jlk(a, d); 
    return a; 
} 
 
ll gh(ll a, ll mo = mod) 
{ 
    return yhgt(a, mo - 2); 
} 
 
const ll diffe = 2e5 + 1; 
ll fg[diffe], v[diffe]; 
void com() 
{ 
    fg[0] = v[0] = 1; 
    for (ll i = 1; i < diffe; i++) 
    { 
        fg[i] = jlk(fg[i - 1], i); 
        v[i] = jlk(v[i - 1], gh(i)); 
    } 
} 



int32_t main()
{
  fast
    com();
      int t;
  cin >> t;
  while (t--) {

    // solve();

    ll m; 
    ll same = 0;
    string er, rt; 
    cin>>m >> er >> rt; 
 
     
    for (ll i = 0; i < m; i++) 
    { 
        if (er[i] == rt[i]) 
        // for (ll i = 0; i < len / 2; i++) {
  //   if (s[i] != s[len - 1 - i])
  //     return false;
  // }
            same++; 
    } 
    if ((m - same) % 2) 
    { 
        cout << 0 << endl; 
        continue; 
    } 
    m -= same; 
    ll we = yhgt(2, same); 








    we = jlk(we, jlk(fg[m], jlk(v[m / 2], v[m / 2]))); 




    cout << we ;
    line 

   
   
  }
  return 0;
}