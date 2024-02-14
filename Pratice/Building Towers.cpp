
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

long long int powMod(long long int x, long long y, long long int m)
{
  long long int ans = 1;
  while (y != 0)
  {
    if (y & 1 == 1)
    {
      ans = ((ans % m) * (x % m)) % m;
    }
    y = y >> 1;
    x = ((x % m) * (x % m)) % m;
  }
  return ans;
}

bool cmp(pair<int, string> a, pair<int, string> b)
{
  return a.first > b.first;
}

ll solve(vector<vector<ll>> &v, ll i, ll last, vector<vector<ll>> &dp)
{
  if (i >= v.size())
    return 0;
  if (dp[i][last] != -1)
    return dp[i][last];
  ll take = 0;
  if (v[i][0] >= last)
    take = v[i][2] + solve(v, i, v[i][1], dp);
  ll noTake = solve(v, i + 1, last, dp);
  return dp[i][last] = max(take, noTake);
}

int32_t main()
{

  ll t;
  cin >> t;

  while (t--)
  {
    long long int n, k;
    cin >> n >> k;

    
    int opr = ceil(log2(n)) + 1;


    cout<<opr<<endl;


    if (opr <= k)
    {
      cout << k - opr + 1 << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }

  return 0;
}

/*

Building Towers

Chef is given a contract to build towers in Chefland which are made by stacking blocks one above the other. Initially, there is only 1 block in the
inventory and no tower has been built. Chef follows the following 2 steps in each operation:
. Either build a new tower or update an existing tower that has been built in previous operations using any number of blocks currently present in the
inventory. After this step, the size of the inventory reduces by the number of blocks used.
. Suppose the tower Chef updated or built has B blocks after the step, Chef gets to add B new blocks to the inventory as a reward.

Find the maximum number of towers of height X that Chef can build in M operations.

Note: Tower of height X means that the tower consists of X blocks placed one above the other.

Input Format

. First line will contain T, number of test cases. Then the test cases follow.
. Each test case contains a single line of input, two space separated integers X, M.

Output Format
For each test case, output a single integer, the maximum number of towers that Chef can build.

*/

/*


Chef needs to build towers of height X using blocks. He has M operations to do so. In each operation, he can either build a new tower or update an existing tower with any number of blocks currently in the inventory. After using the blocks, he gets to add the same number of blocks to the inventory as a reward.

Chef wants to maximize the number of towers of height X he can build within M operations.

To solve this problem, Chef should follow these steps:

Initialize a variable max_towers to store the maximum number of towers Chef can build. Set it to 0 initially.
Iterate through each operation.
If Chef has enough blocks to build a new tower of height X, increment max_towers by 1 and reduce the number of blocks in the inventory by X. Then add X blocks to the inventory as a reward.
If Chef doesn't have enough blocks to build a new tower, but there are existing towers that can be updated, update one of them by adding the available blocks. Then add the same number of blocks to the inventory as a reward.
Continue these steps until Chef has completed all M operations.
Output the value of max_towers as the result for the current test case.
This way, Chef maximizes the number of towers of height X he can build within the given number of operations.


*/
