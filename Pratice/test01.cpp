
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long int
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

int gcd(int a, int b)
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
    return gcd(a - b, b);
  return gcd(a, b - a);
}

// const ll NRR = 2e5 + 1;
// ll arr[NRR][19];

int calculateScore(int totalStones, int currentPosition, int gapSize) {
    return (currentPosition % gapSize) * ((totalStones - currentPosition) % gapSize);
}

int qwd(vector<int> &ui, int n)
{
    vector<int> df(n, 0);


    vector<int> uy(n, 0);



    stack<int> fg;




    set<int> re;

    df[0] = -1;



    fg.push(ui[0]);
    for (int i = 1; i < n; i++)
    {
        while (fg.size() > 0 && ui[i] > fg.top())
        {
            fg.pop();

            
        }
        if (fg.size() == 0)
        {
            df[i] = -1;
        }
        else
        {
            df[i] = fg.top();
        }


        fg.push(ui[i]);
    }
    while (fg.size() > 0)
    {
        fg.pop();
    }

    uy[n - 1] = -1;



    fg.push(ui[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (fg.size() > 0 && ui[i] >= fg.top())
        {
            fg.pop();
        }
        if (fg.size() != 0)
        {
            uy[i] = fg.top();
        }
        else
        {
            uy[i] = -1;
        }
        fg.push(ui[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (df[i] != -1)
        {
            re.insert(df[i] - ui[i]);
        }
        if (uy[i] != -1)
        {
            re.insert(uy[i] - ui[i]);
        }
    }

    int d = re.size();

    return d;
}





signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int totalStones;
    cin >> totalStones;

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    int gapSize;
    cin >> gapSize;
    
    int currentPosition = 0;

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    int maxScore = -1;

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    int currentGap = totalStones % gapSize;
    currentGap /= 2;

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
        maxScore = calculateScore(totalStones, currentPosition, gapSize);
        currentPosition = currentGap;
    }

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    currentGap = min({totalStones - 1, gapSize - 1, (totalStones % gapSize) / 2 + 1});



    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }


    
    if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
        maxScore = calculateScore(totalStones, currentPosition, gapSize);
        currentPosition = currentGap;
    }

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
        maxScore = calculateScore(totalStones, currentPosition, gapSize);
        currentPosition = currentGap;
    }

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
        maxScore = calculateScore(totalStones, currentPosition, gapSize);
        currentPosition = currentGap;
    }

    
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    // currentGap = min({totalStones - 1, gapSize - 1, totalStones % gapSize + (gapSize - totalStones % gapSize) / 2 + 1});
    // if (maxScore < calculateScore(totalStones, currentPosition, gapSize)) {
    //     maxScore = calculateScore(totalStones, currentPosition, gapSize);
    //     currentPosition = currentGap;
    // }
    
    cout << currentPosition << endl;
    }
    return 0;
}