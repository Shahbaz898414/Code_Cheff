
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

ll fact[1100];

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

// ll nck(int n, int k)
// {
//   ll nans = fact[n];
//   ll kans = fact[n - k] * fact[k] % mod;
//   return nans * power(kans, mod - 2) % mod;
// }

int32_t main()
{

  int t;
  cin >> t;

  while (t--)
  {
    // it n, k;
    // cin >> n >> k;
    // it cnt = NULL, val = NULL;
    // vector<it> V(n);
    // f { cin >> ele; }
    // sort(all(V), greater());
    // loop(n)
    // {
    //   if (k > val)
    //   {
    //     val += V[i];
    //     ++cnt;
    //   }
    // }
    // if (val < k)
    //   cout << "-1\n";
    // els
    //   cout << cnt << "\n";
  }

  return 0;
}

/*


Let d(P1, P2) be the Manhattan distance between points P1 = (x1,y1) and P2 =(x2, y2). Then d(P1, P2) = |x1 - x2| + |y1 - y2|.

Note that if you are going from A to B (or to C) along the shortest path, the Manhattan distance will be decreasing with each move. So Bob and Carol can walk together as along as they find the next cell that is closer to both B and C.

Now note that if they are in the bounding box of cells B and C then there are no such "next cell", since d(X,B) + d(X,C) is constant and equal to d(A, B) if X is in the bounding box. In other words, Bob and Carol can walk together until they reach some cell X inside the bounding box, where they split up.

Finally, let's look at the total distance they will walk: from one side it's d(A, B) + d(A, C). But from the other side it's 2 . d(A,X)+d(X,B)+d(X,C).

So,

d(A,X)=d(A,B)+d(A,C)-(d(X,B)+d(X,C))/2

But since d(X,B)+d(X,C)=d(B,C) whichever X is chosen we can calculate answer as
(d(A,B)+d(A,C)-d(B,C)/2)+1

where +1 is because we are talking about cells A, B and C and not just points.





In the problem, we define the Manhattan distance between two points and observe that it decreases as we move from point A to B or C. Bob and Carol can walk together until they reach a cell inside the bounding box of B and C, where they split. The total distance they walk is the sum of distances from A to B and A to C, but also equal to twice the distance from A to X plus the distances from X to B and C. Therefore, we can calculate the answer as ((d(A,B) + d(A,C) - d(B,C)) /
2) + 1, accounting for the cells A, B, and C. 🔄🚶‍♂️


The problem discusses how a segment of equal characters in a string implies a minimum number of distinct values in the result. By applying a greedy algorithm, constructing an array from left to right using integers from O to the length of the longest segment, ensures a solution where adjacent elements follow the character comparison in the string. This approach reduces the problem to finding the longest contiguous subsegment of equal characters,simplifying the solution strategy.


Based on the array a, form an array of pairs {temperature, day number} and sort it in ascending order
of temperature. Also sort the array b in ascending order. Now, the values a[i]. first and b[i] are the
predicted and real temperature on day a[i]. second.

Indeed, consider the minimum temperatures b[1] and a[1]. first. The difference between them is
t = |b[1] - a[1]. first|. If we consider the value |b[i] - a[1]. first| or |b[1] - a[i]. first| at
i > 1, there will be at least t since a[1] ≤ a[i] and b[1] ≤ b[i].
Since it is guaranteed that it is possible to rearrange the elements in the array b, and the elements
b[1] and a[1]. first have the smallest difference, it is definitely not greater than k.


*/