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
#define printv(v)                        \
    for (int i = 0; i < (v.size()); i++) \
    {                                    \
        cout << v[i] << " ";             \
    }                                    \
    line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define tk(x) \
    int x;    \
    cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)       \
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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<bool> is_prime(10001, 1);
vector<int> primes;

ll fact[1000001];

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

ll nck(ll main)
{
    ll ans = log2(main);

    return pow(2, ans + 1);
}

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

int cnt = 0;
vector<int> vis(100001);

const int MAXN = 1005;

int dp[MAXN][MAXN];

void dfs(vector<vector<int>> &adj, int i)
{
    vis[i] = 1;
    cnt++;
    for (auto nbr : adj[i])
    {
        if (vis[nbr] == 0)
        {
            dfs(adj, nbr);
        }
    }
}


int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for (int row = 0; row < m; row++) {
            for (int col = 1; col < n; col++) {
                matrix[row][col] += matrix[row][col - 1];
            }
        }


        
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                 cout<<matrix[row][col]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        


        int count = 0;


        for(int c1 = 0; c1 < n; c1++) {
            for(int c2 = c1; c2 < n; c2++) {
                unordered_map<int, int> map;
                map[0] = 1;
                int sum = 0;

                for (int row = 0; row < m; row++) {

                   sum += matrix[row][c2] - (c1 > 0 ? matrix[row][c1 - 1] : 0);
                   count += map[sum - target];
                   map[sum]++;

                }
            }
        }

    return count;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;cin >> t;
    // while(t--) {
    int n;
    cin >> n;

    vector<vector<int>> vec(n,vector<int>(n));

    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin>>vec[i][j];
        }
    }
    int k;cin>>k;


    cout<<numSubmatrixSumTarget(vec,k);

   
        
    // }




}
