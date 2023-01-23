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

bool isPalindrome(string S, int start, int end)
{

  int i = start;
  int j = end;

  while (i < j)
  {
    if (S[i] != S[j])
      return false;
    i++;
    j--;
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

ll binpow(ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

string makePalindrome(string S)
{

  int i = 0;
  int j = S.length() - 1;

  while (i < j)
  {

    if (S[i] == S[j])
    {
      i++;
      j--;
    }
    else
    {

      if (isPalindrome(S, i + 1, j))
        return "YES";

      if (isPalindrome(S, i, j - 1))
        return "YES";

      return "NO";
    }
  }

  return "YES";
}

auto has_all_vowels(string a, string b) {
   set<int> s;
   for (auto e : a) s.insert(e);
   for (auto e : b) s.insert(e);
   return s.size() == 5;
}


auto shrink(string s) {
    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    return s;
}

void takeInput(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  return;
}

int countPrefixes(vector<string> &words, string s)
{
  int count = 0;
  for (auto wd : words)
    if (s.find(wd) < 1)
    {
      cout << wd << " ";
      count++;
    }
  cout << endl;
  return count;
}

template <class I>
auto get_kth_element_count(I it, int offset) {
  while (offset >= it->second) 
    offset -= it->second, ++it;
  return it->second;
}
int calculate_F(map<int,int> const& m, int n, int offset) {
  if (offset < n - offset) {
    return get_kth_element_count(m.rbegin(), offset);
  } else {
    offset = n - offset - 1;
    return get_kth_element_count(m.begin(), offset);
  }
}


int32_t main() {
  int t;cin >> t;
  while (t-- > 0) {
    int n, k; cin >> n >> k;
    // string s;cin>>s;

    // set<int> se;
    vector<int> v(n,0);

    ll dp[n];

    for (int i = 0; i <n; i++) {
      cin>>v[i];
    }

    for (int i = n-1; i >=0; i--)
    {
      /* code */
      dp[i]=v[i];
      if(i+k<n){
        dp[i]=dp[i]+dp[i+k];
      }
    }


    ll ans=INT_MIN;

    for (int i = 0; i <n; i++)
    {
      /* code */
      ans=max(ans,dp[i]);
    }
    

    cout<<ans<<endl;
    

    // se.insert(k);

    
   
  }
  return 0;
}