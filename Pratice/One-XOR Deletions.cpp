#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define md 1000000007





int main() {

  // cout<<(2^3)<<" "<<(4^5)<<" "<<(6^7)<<" "<<(8^9)<<endl;
  int T = 1;
  cin >> T;
  while (T--)
  {
    ll n,m;cin>>n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }

    map<ll,ll>  mp;

    for (ll i = 0; i < n; i++)
    {
      /* code */
      mp[arr[i]]++;
    }
    

    ll ans=0;

    for(auto it:mp){
      ll cur=it.first;
      ll next=it.first-1;

      ll x=(cur^next);

      // cout<<x<<" ";

      if(x<=1){
        if(mp.find(next)!=mp.end()){
          ans=max(ans,mp[cur]+mp[next]);
        }
      }

      ans=max(ans,it.second);
    }

    // cout<<endl;


    cout<<n-ans<<endl;
    
    
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



Today was my 49th day out of the 100 days  hard challenge.
So today, I solved 5 problems .


1. Modular GCD (https://www.codechef.com/problems/GCDMOD).


2. Many Chefs (https://www.codechef.com/problems/MANYCHEF).


3. Pokemon Battles (https://www.codechef.com/problems/PBATTLE)


4. B. Applying MAX to Segment (https://lnkd.in/duwvAtS7).


5. C. Assignment to Segment (https://lnkd.in/dCezMgnv).


#100dayschallenge #challenge #consistency #Cp #lessons  #learning


*/