
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
    ll n,k;cin>>n;
	  ll ans = 0;
    // ll arr[n];

    // vector<ll> even,odd,arr(n);

    int la = 0, lb = 0, alln = 0, known = 1;

    for(int i=0;i<n;i++) {
     int a, b,cmd;
            cin>>cmd>>a>>b;
 
 
            if (a == b) {
                puts("YES");
                known = 1;
            }
 
            else if(cmd == 1) {
                puts("YES");
                known = 1;
            }
            else if(!known){
                puts("NO");
            }
            else if (min(a, b) < max(la, lb)) {
                puts("YES");
                known = 1;
 
            }
            else {
                puts("NO");
                known = 0;
            }
            la = a;
            lb = b;
 
    }

   
   
  }
   return 0;
}

