
#include<bits/stdc++.h>
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
void _print(T t) {
  cerr << t;
}

template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}

template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v){
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(vector<vector<T>> v) {
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++) { 
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
  }
  cerr << "]";
}

template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

const long long inf = 1e18;
const int MOD = 1e9+7;
const int MAX = 1e6;

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

void rotateMatrix(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
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

void seive() {
    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i < 10001; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < 10001; j += i) {
                is_prime[j] = 0;
            }
        }
    }
}

int32_t  main() {

  ll t;cin>>t;
	// seive();
	while(t--) {
    ll n;cin>>n;
    ll a[n];

    ll pr[n][32];

    for (ll i = 0; i <n; i++) {
      cin>>a[i];

      ll c=0;
            
        while(a[i]>0) {
          c++;
          a[i]/=2;
        }

        cout<<c<<" ";
            
          
            
          if(i==0) {
                for(ll j=0; j<=31; j++) {
                    if(j==c){
                        pr[i][j]=1;
                    }else{
                        pr[i][j]=0;
                    }
                }
          }else{
                
            for(ll j=0; j<=31; j++) {
                if(j==c){
                  pr[i][j]=pr[i-1][j]+1;
                }else{
                  pr[i][j]=pr[i-1][j];
                }
            }
          }
    }

     cout<<endl;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j <=31; j++) {
        cout<<pr[i][j]<<" ";
      }
      cout<<endl;
    }
    
   

     ll q,ans;cin>>q;

    for (int i = 0; i <q; i++) {
      ll x,y,z;cin>>x>>y>>z;
      x--;y--;
      int cnt=0;
      while(z>0){
        cnt++;
        z/=2;
      }

      ans=y+1-pr[y][cnt];

      if(x>0) ans=ans-(x-pr[x-1][cnt]);

      cout<<ans<<endl;
    }
    
  
   
  }
   return 0;
}

