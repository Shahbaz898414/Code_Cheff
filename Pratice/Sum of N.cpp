#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

signed main()
{

  	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int N = 1000000;
    bool prime[N + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= N; p++) {
        if (prime[p] == true) {

            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    long psum[N + 1] = {0},s=0;
    for (int i = 2; i <= N; i++) {
        if (prime[i]) s+=i;

        // cout<<s<<" ";
        psum[i] = s;
    }

    for (int i = 2; i <=50; i++)
    {
      /* code */
      cout<<psum<<" ";
    }
    
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n % 2 == 0) printf("%d\n", 2 * n);
        else {
            long sum=0;
            if (prime[n]) sum = psum[n];
            else {
                int p = 0;
                for (p = 3; p * p <= n; p++)
                    if (n % p == 0) break;
                sum = psum[p];
            }
            printf("%ld\n", sum * n);
        }
    
  }
  return 0;
}


