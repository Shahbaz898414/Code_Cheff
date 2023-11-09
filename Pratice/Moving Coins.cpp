#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll MOD = pow(10, 9) + 7;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int n,k; cin >> n >> k;
		// int a[n];
        int b[1001];
        for(int i=0;i<1001;i++)
        b[i]=0;
        for(int i=0;i<n;i++)
        {
            int x;cin >> x;
            b[x]=1;
        }
        long long int ans=0,coins=0;
        for(int i=1000;i>0;i--)
        {
            if(b[i]==1)
            coins++;
            else
            {
                if(coins>0)
                {
                    if(coins>k)
                    {
                        ans=ans+(coins/k);
                        if(coins%k>0)
                        ans=ans+1;
                    }
                    else
                    {
                        ans=ans+1;
                    }
                }
            }
        }
        cout << ans << endl;
    


  }
  return 0;
}





/*


There is a line with 1000 cells numbered from 1 to 1000 from left to right and N coins placed on it. Coin i is placed at cell Xi, and no two coins are placed at the same cell.  Bob would like to move the coins to the N leftmost cells of the line. To do this, he is allowed to take a coin from any cell T and move it to cell T-j, where j is an integer between 1 and K, inclusive.

This action is possible only if:

cell T-j actually exists and doesn't contain a coin;
each of the cells T-j+1, ..., T-1 contains a coin.



Input 
The first line of the input file contains one integer T -- the number of test cases (no more than 10). Then T test cases follow, and every test case is described by two lines: 
the first of them contains two integers N and K (1 <= N, K <= 1000), the second of them contains N integers X1, ..., XN in strictly increasing order (1 <= Xi <= 1000).

Output
For each test case output one line containing the requested minimal time for Bob to put all the coins to the left side of the line.


*/