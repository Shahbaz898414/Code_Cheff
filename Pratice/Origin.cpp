

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

void prime_sieve()
{

  prime[0] = 0;
  prime[1] = 0;

  for (int i = 2; i < n; i++)
  {
    prime[i] = 1;
  }

  for (ll i = 2; i * i < n; i++)
  {
    if (prime[i] == 1)
    {
      for (int j = i * i; j < n; j += i)
      {
        prime[j] = 0;
      }
    }
  }
}

bool check(int GCD, int K)
{
  int max_prime = 1;
  for (int i = 2; i <= sqrt(GCD); i++)
  {
    while (GCD % i == 0)
    {
      GCD /= i;
      max_prime = max(max_prime, i);
    }
  }
  max_prime = max(max_prime, GCD);

  if (max_prime <= K)
    return true;
  else
    return false;
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    ll sum = 0,r=0;
    for (ll i = 1; i <=n; i++)
    {
      /* code */
      if(i>=1 and i<=9) r+=0;
      else
      r+=(i%10+i/10),cout<<(i/10)<<(i%10)<<" ";
    }
    cout<<endl;

    cout<<r<<endl;
    
    sum = (n / 9) * 45;
    // cout<<sum<<" ";
    int rem = n % 9;
    // cout<<rem<<" ";
    sum += (rem + 1) * rem / 2;
    cout << sum << endl;

  }
}

/*

I want to become an MLH Fellow for several reasons, all of which are rooted in my passion for technology, my desire to learn and grow, and my commitment to making a positive impact in the world.

First and foremost, I want to become an MLH Fellow because I am deeply passionate about technology and its potential to change the world for the better. As a computer science student, I have always been fascinated by the power of technology to solve complex problems, enhance efficiency, and improve people's lives. I am particularly drawn to the field of machine learning and artificial intelligence, as I believe these technologies have the potential to revolutionize various industries, from healthcare to finance to transportation. Becoming an MLH Fellow would provide me with the opportunity to immerse myself in these cutting-edge technologies and gain valuable hands-on experience that will help me develop the skills and knowledge needed to make a meaningful impact in the field.

Additionally, I want to become an MLH Fellow because I am eager to learn and grow as a technologist. The MLH Fellowship offers a unique learning experience that combines real-world project work with mentorship, workshops, and networking opportunities. By participating in the Fellowship, I would have the chance to work on impactful projects, collaborate with a diverse group of talented individuals, and receive guidance and support from experienced mentors. This immersive learning environment would enable me to deepen my understanding of machine learning and AI, expand my technical skill set, and gain valuable insights into the latest trends and best practices in the field.

Furthermore, I want to become an MLH Fellow because I am committed to using my technical skills to create positive change in the world. Throughout my academic and professional journey, I have always strived to leverage technology for social good, whether through volunteering for tech-for-good organizations, participating in hackathons focused on creating solutions for social and environmental challenges, or developing projects that address pressing societal issues. As an MLH Fellow, I would have the opportunity to work on projects that have the potential to make a real difference, whether it's through advancing healthcare technology, improving accessibility and inclusivity, or addressing environmental sustainability. I am passionate about using technology as a force for good, and I believe that the MLH Fellowship would provide me with the platform and resources to turn that passion into tangible impact.

In conclusion, I want to become an MLH Fellow because of my unwavering passion for technology, my eagerness to learn and grow as a technologist, and my commitment to using my skills for social good. The MLH Fellowship offers an unparalleled opportunity to immerse myself in the world of machine learning and AI, gain valuable experience and mentorship, and work on meaningful projects that have the potential to make a positive impact. I am excited about the prospect of joining the MLH Fellowship and am confident that it would be a transformative and enriching experience that will further fuel my passion for technology and empower me to contribute to a better, more innovative future.


///////////////////////////////////////////////////

I want to become an MLH Fellow because I love technology, want to keep learning and growing, and am committed to making a positive impact in the world.

First, I am passionate about technology and its ability to make the world better. As a computer science student, I am fascinated by how technology can solve problems and improve lives. I am especially interested in machine learning and AI because they can transform industries like healthcare, finance, and transportation. Being an MLH Fellow would let me dive into these technologies, gain practical experience, and build the skills needed to make a real difference.

Additionally, I'm eager to learn and grow in technology. The MLH Fellowship offers real-world projects, mentorship, workshops, and networking. It would let me work on impactful projects, collaborate with talented people, and get guidance from experienced mentors. This experience would help me deepen my knowledge of machine learning and AI, improve my technical skills, and stay updated on the latest trends and best practices.

Furthermore, I am dedicated to using my tech skills to create positive change. Throughout my journey, I've worked on tech-for-good projects, participated in hackathons for social and environmental solutions, and developed projects addressing societal issues. As an MLH Fellow, I would have the chance to work on impactful projects, like advancing healthcare technology, improving accessibility, or promoting environmental sustainability. I'm passionate about using technology for good, and the MLH Fellowship would give me the platform and resources to make a real difference.


In conclusion, I love technology, want to keep learning and growing, and am committed to using my skills for social good. The MLH Fellowship offers a unique chance to dive into machine learning and AI, gain experience and mentorship, and work on impactful projects. I'm excited about the opportunity and believe it will be a transformative experience that will boost my passion for technology and help me contribute to a better future.



















*/