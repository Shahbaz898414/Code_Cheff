
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

int32_t main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    bool a;
    string s;
    cin >> s;
    string finalanswer = "";
    ll finaloperations = INT_MAX;
    ll operations;
    if (s.length() >= 9)
    {
      for (int i = 0; i + 5 <= s.length(); i++)
      {
        a = 1;
        string t = s;
        operations = 0;
        if (t[i] != 'l')
        {
          t[i] = 'l';
          // cout<<s[0]<<endl;
          operations++;
        }
        if (t[i + 1] != 'u')
        {
          t[i + 1] = 'u';
          // cout<<s[1]<<endl;
          operations++;
        }
        if (t[i + 2] != 'c')
        {
          t[i + 2] = 'c';
          // cout<<s[2]<<endl;
          operations++;
        }

        if (t[i + 3] != 'k')
        {
          t[i + 3] = 'k';
          // cout<<s[3]<<endl;
          operations++;
        }
        if (t[i + 4] != 'y')
        {
          t[i + 4] = 'y';
          // cout<<s[4]<<endl;
          operations++;
        }
        int st = 0;
        int e = s.length() - 1;
        while (st < e)
        {
          if (t[st] == t[e])
          {
            st++;
            e--;
            continue;
          }
          if (st >= i and st < i + 5 and e >= i and e < i + 5)
          {
            a = 0;
            break;
          }
          if (st >= i and st < i + 5)
          {
            t[e] = t[st];
            operations++;
          }
          else if (e >= i and e < i + 5)
          {
            t[st] = t[e];
            operations++;
          }
          else if (t[st] < t[e])
          {
            t[e] = t[st];
            operations++;
          }
          else if (t[st] > t[e])
          {
            t[st] = t[e];
            operations++;
          }
          st++;
          e--;
        }
        if ((a == 1) && ((finaloperations > operations) || (finaloperations == operations && (finalanswer > t || finalanswer == ""))))
        {
          finalanswer = t;
          finaloperations = operations;
        }
        st++;
        e--;
      }
      cout << finalanswer << " " << finaloperations << endl;
    }
    else
    {
      cout << "unlucky" << endl;
    }
  }
}
