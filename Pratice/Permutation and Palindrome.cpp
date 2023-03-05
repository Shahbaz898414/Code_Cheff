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
const int MOD = 998244353;
const int MAX = 1e6;

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

int32_t main() {
    fast
    int t;cin >> t;
    while(t-->0) {
      string s; cin >> s;
        unordered_map<char, ll> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        ll total_odds = 0;
        for (auto i : m) {
            if (i.second % 2 == 1) {
                total_odds++;
            }
        }
        if(s.size()==1) cout << 1 << endl;
        else if (total_odds > 1) {
            cout << -1 << endl;
        }
        else if (total_odds == 1 && s.size() % 2 == 0) {
            cout << -1 << endl;
        }
        else {
            ll answer[s.size()];
            map<char, vector<ll>> charIndex;
            for(int i = 0; i < s.size(); i++) {
                charIndex[s[i]].push_back(i + 1);
            }
            ll currentIndex = 0;
            for (auto i : charIndex) {
                if ((i.second).size() == 1) {
                    answer[s.size() / 2] = (i.second)[0];
                    i.second.pop_back();
                }
                else {
                    reverse(i.second.begin(),i.second.end());
                    while(!(i.second).empty()){
                        answer[currentIndex] = i.second[i.second.size()-1];
                        i.second.pop_back();
                        answer[s.size()-currentIndex-1] = i.second[i.second.size()-1];
                        i.second.pop_back();
                        currentIndex++;
                        if(i.second.size()==1){
                            answer[s.size()/2]=i.second[0];
                            i.second.pop_back();
                        }
                    }
                }
            }
            for (int i = 0; i < s.size(); i++)
            {
                cout << answer[i] << " ";
            }
            cout << endl;
        }
        

    
      
        
    }
  return 0;
}




