#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define md 1000000007

ll gcd(ll a, ll b)
{
  if (a < b)
    swap(a, b);
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll powmod(ll a, ll m, ll mod)
{
  if (m == 0)
    return 1;
  ll res = powmod(a, m / 2, mod) % mod;
  if (m & 1)
    return (((__int128_t)res * res) % mod * a) % mod;
  else
    return ((__int128_t)res * res) % mod;
}



int main() {
  int T = 1;
  cin >> T;
  while (T--)
  {
    ll n,m;cin>>n>>m;
    string s;cin>>s;
  }

  return 0;
}


/*


There is a city where people are fond of visiting restaurants. In fact, any building in this town is either a house or a restaurant. There are N buildings in the city and they are conveniently numerated by integer numbers from 1 to N. To move from some building to others there are M two-way roads. Each road connects two buildings. It is possible that there are several roads that connect the same pair of buildings, but there won't be a road that connects a building to itself. Chef wants to make the ways to his restaurants more interesting. To do that he is going to decorate some roads. Each road has its own integer cost of decorating. Some costs may be negative. If the cost is negative Chef will get some reward for decorating this road. Now Chef doesn't have much money so he wants to decorate roads in such a way that from each house, at least one restaurant is reachable using only decorated roads. The total cost of decorated roads should be minimal. So, your task is to help him to calculate the minimal cost of any satisfactory subset. It might be negative if Chef's rewards for decorating some roads are greater than his spent money.

Input
There first line of input contains an integer T - the number of test cases. Then T test cases follow. For each test case there will be integers N and M - the number of buildings and the number of roads. Then a string of N letter follows. I-th symbol of this string is "R" if the corresponding building is a restaurant and "H" if it is a house. Then there are M lines. Each line consists of three integers - Xi Yi Zi. They describe a road that connects buildings Xi and Yi with the cost of decorating equal to Zi.

Output For each test case output the minimal cost of any satisfactory subset of roads.

*/



/*



Today was my 50th day out of the 100 days  hard challenge.
So today, I solved 5 problems .


1. Modular GCD (https://www.codechef.com/problems/GCDMOD).


2. Many Chefs (https://www.codechef.com/problems/MANYCHEF).


3. Pokemon Battles (https://www.codechef.com/problems/PBATTLE)


4. One-XOR Deletions (https://www.codechef.com/problems/DELXORONE?tab=statement).


5. Chef of the Year (https://www.codechef.com/problems/CVOTE).


#100dayschallenge #challenge #consistency #Cp #lessons  #learning


*/