#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main()
{
    int T = 1;cin>>T;
    while (T--)
    {
        ll n;cin>>n;
      vector<ll> arr(n),brr(n);

      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>arr[i];
      }
      

      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>brr[i];
      }

       vector<pair<int, int>>v;

       for (ll i = 0; i < n; i++)
       {
        /* code */
        v.push_back({arr[i],brr[i]});
       }

       sort((v).begin(),(v).end());

       for(auto it:v){
        cout<<it.first<<" "<<it.second<<endl;
       }



       cout<<endl;

      //  for (int i = n-1; i >=0 ; i--)
      //  {
      //   /* code */
      //   cout<<v[i].first<<" "<<v[i].second<<endl;
      //  }


       cout<<endl;
      //  cout<<endl;

       


        int ans = 0, mx = 0;


        for (int i = n - 1; i >= 0; i--) {
          

            if (v[i].second > mx) {
                ans++;
            }

            mx = max(mx, v[i].second);
            // cout<<mx<<" "<<v[i].second<<endl;

        }

  

        // cout<<endl;



        cout << ans << endl;

             

    }

    

    return 0;
}




/*

There are N Pokemon trainers numbered from 1 to N. Each trainer has one Pokemon. All the trainers have arrived to participate in a contest. There are two battle arenas, one in ground and other in water. Each Pokemon may have different power in both the arenas. When two Pokemon fight in an arena, the Pokemon having higher power in that arena wins. It is guaranteed that all Pokemon have distinct powers in the same arena to avoid any ties.  The strength of a Pokemon trainer is determined to be the number of other Pokemon his Pokemon can defeat in at least one arena.  It is known that only the Pokemon trainers with the highest strength will qualify for the next round (multiple trainers may have the same strength). Find the number of Pokemon trainers who will qualify for the next round.  

Input
Format The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of three lines of input. The first line of each test case contains a single integer N, denoting the number of Pokemon trainers. The second line will contain N space-separated integers A1 ,A2 ,…,A  N ​  , where Ai ​denotes the power of the Pokemon of  ith   trainer in the ground arena. The third line will contain N space-separated integers,B1,B2 ,…,B  N ​  , where Bi denotes the power of the Pokemon of  ith   trainer in the water arena. 

Output 
Format For each test case, output on a new line the number Pokemon trainers who will qualify for the next round.





Test case 4: The maximum strength possible is 4. There are 3 trainers with strength  4:

Trainer 3: Trainer  3's pokemon has ground power equal to  5, so, it can defeat all other  4 pokemons in the ground arena. Thus, the trainer's strength is 4.

Trainer  4: Trainer  4's pokemon has ground power equal to 4. It can beat the pokemons having ground power less than 4. These belong to trainers 1,2, and  5. Similarly, it has water power equal to 5. Thus, it can also beat trainer 3's pokemon which has water power  1 1. Thus, total strength of this trainer is  4.

Trainer  5: Trainer  5's pokemon has water power equal to  6, so, it can defeat all other 4 pokemons in the water arena. Thus, the trainer's strength is  4.


5
2 3 5 4 1
4 2 1 5 6

*/