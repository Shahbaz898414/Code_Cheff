#include <bits/stdc++.h>

#define int long long
using namespace std;
int n, m, x, i, j;
signed main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> p, q, r, s;
		cin >> n >> m;
		if (n == 1 || m == 1)
		{
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++) {
					cin >> x;
					p.push_back(x);
				}

			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++) {
					cin >> x;
					q.push_back(x);
				}

			if (p == q)
				puts("yes");
			else
				puts("no");
		}
		else {


			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++) {
					cin >> x;
					if ((i ^ j) % 2)
						p.push_back(x);
					else
						q.push_back(x);
				}



			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
				{
					cin >> x;

					if ((i ^ j) % 2)
						r.push_back(x);
					else
						s.push_back(x);
				}


			sort(p.begin(), p.end());

			sort(q.begin(), q.end());

			sort(r.begin(), r.end());
			
			sort(s.begin(), s.end());

			if (p == r && q == s) puts("yes");

			else puts("no");

		}
	}
	return 0;
}



/*

Let's notice that the condition that we can achieve arbitrarily large values means that we need to
guarantee at least a+1 to our coins. At the very first win. In this case, we can repeat this strategy
indefinitely.

Also, let's notice that if we have lost a total of z before, then in the next round we need to bet y such
that y . (k -1) > z, because otherwise the casino can give us a win. In this case, the condition of
not losing more than x times in a row will disappear, and we will end up in the negative. Therefore, the
tactic is not optimal.

Therefore, the solution is as follows: we bet 1 at first, then we bet the minimum number such that the
win covers our loss. And if we have enough to make such a bet for x + 1, then the casino must end
up in the negative, otherwise we cannot win.


*/