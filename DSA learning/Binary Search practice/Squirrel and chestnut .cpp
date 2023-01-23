#include <bits/stdc++.h>
using namespace std;
#define int long long
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
int arr[(int)1e6+10];
set<int> tprimes;

bool isValid(string s) {
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
  for (int i = 0; i < n / 2; i++) {
    for (int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}


void t_primes(){
  tprimes.insert(4);
  for (int i =3; i<(int)1e6;i+=2){
    if(arr[i]==0){
      tprimes.insert(i*i);
      for (int j=i;j<=1e6;j+=i) {
        arr[j]=1;
      }
    }
  }
}




int p[10000007],tt[10000007];
int ans[10000007];
int n,m,k;

bool cmp(int a,int b){
  return a>b;
}

int check(int ti) {
  int i;
  for (int i =1; i<=m; i++){
    if(ti<tt[i]) ans[i]=0;
    else ans[i]=(ti-tt[i])/p[i]+1;
  }
  sort(ans+1,ans+1+m,cmp);
  int sum=0;
  for (int i =1; i <=min(n,m); i++) {
    sum+=ans[i];
  }
  if(sum>=k) return 1;
  else return 0;
  
}

int fin(int l,int r) {
  if(l==r) return l;
  int mid=(l+r)/2;
  if(check(mid)) return fin(l,mid);
  else return fin(mid+1,r);
}

int32_t main() {
    fast

    int t;cin>>t;
    while (t--) {
      cin>>m>>n>>k;
      // int p[m],tt[m];

      for(int i = 0; i<m;i++) {
        cin>>tt[i];
      }

      for(int i = 0; i <m; i++){
        cin>>p[i];
      }

      int cnt=fin((int)1,(int)1e9);
      cout<<cnt<<endl;
      
    }
    
   

  
  return 0;
}

/*


*/

