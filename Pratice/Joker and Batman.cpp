

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

ll bit(ll x, ll y)
{
  ll vnt = 1, vbg = x;
  while (y > 0)
  {
    if (y % 2)
      vnt *= vbg, vnt %= mod;
    vbg *= vbg, y /= 2, vbg %= mod;
  }
  return vnt;
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

void prime_sieve(){

    prime[0] = 0;
    prime[1] = 0; 
        
    for(int i=2;i<n;i++){
        prime[i] = 1; 
    }
    
    for(ll i=2;i*i<n;i++){
        if(prime[i]==1){
            for(int j=i*i;j<n;j+=i){
                prime[j] = 0; 
            }
        }
    }
    
    
}

bool check(int GCD, int K){
    int max_prime = 1;
    for(int i = 2; i <= sqrt(GCD); i++){    
        while(GCD % i == 0){
            GCD /= i;
            max_prime = max(max_prime, i);
        }
    }
    max_prime = max(max_prime, GCD);       
                                        
    if(max_prime <= K)
        return true;
    else
        return false;
}


int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 
  ll t; cin>>t;    

    while(t--) {
      ll n;cin>>n;

      vector<ll> arr(n);

      for (ll i = 0; i < n; i++)
      {
        cin>>arr[i];
      }
      
      
      
      
    }  
}






/*

Given an array All consisting of O's and 1's. A flip operation is one in which you turn 1 into 0 and a 0 into 1. You have to do at most one "Flip" operation of any subarray.

Formally, select a range (1, r) in the array A of size n, such that (0 <1≤r<n) holds and flip the elements in this range to get the maximum ones in the final array.

2

You can possibly make zero operations to get the answer. You are asked to return the maximum number of 1's you can get in the array after doing flip operation

*/




/*


public static int findMaxZeroCount(int A[], int N)
    {
        
        int cnt = 0;
      
       
        int mx = 0;
      
        
        int cur = 0;
      
        for (int i = 0; i < N; i ++)
        {
           
            if (A[i] == 0)
               cnt ++;
      
            
            int val = (A[i] == 1)? 1 : -1;
      
           
            cur = Math.max(val, cur + val);
            mx = Math.max(mx, cur);
        }
        mx = Math.max(0, mx);
      
        return cnt + mx;
    }




    int findMaxZeroCount(vector<int>  A, int N)
{
    // Initialize count of zeros and maximum difference
    // between count of 1s and 0s in a subarray
    int orig_zero_count = 0;
 
    // Initiale overall max diff for any subarray
    int max_diff = 0;
 
    // Initialize current diff
    int curr_max = 0;
 
    for (int i=0; i<n; i++)
    {
        // Count of zeros in original array (Not related
        // to Kadane's algorithm)
        if (arr[i] == 0)
           orig_zero_count++;
 
        // Value to be considered for finding maximum sum
        int val = (arr[i] == 1)? 1 : -1;
 
        // Update current max and max_diff
        curr_max = max(val, curr_max + val);
        max_diff = max(max_diff, curr_max);
    }
    max_diff = max(0, max_diff);
 
    return orig_zero_count + max_diff;
}













India, being a cricket-crazy nation, shares Sarfaraz's passion for the sport and the analytical aspect of it. Sarfaraz an ardent cricket enthusiast, has developed a Cricket app that specializes in evaluating cricketers performances. The app assigns a negative rating to under-performing cricketers and rewards a positive rating to those who excel Sarfaraz's primary objective is to analyze the performance of a cricketer across a span of N matches and determine their consistency. He aims to identify the maximum cumulative cricket rating achieved by a batsman or a bowler, but only if their overall rating remains positive throughout the given period. Can you assist Sarfaraz in accomplishing this task?



Note: Return maximum consistent sum of rating of the cricketer if positive else 0 (zero)

*/







































































































































































































































































































































































































































































































































































































































































































































































