#include <bits/stdc++.h>

#define int long long
using namespace std;
int n, m, x, i, j;
signed main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        vector < int > p, q, r, s;
        cin >> n >> m;
        if (n == 1 || m == 1) {
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

        } else {
            for (i = 0; i < n; i++)

                for (j = 0; j < m; j++) {
                    cin >> x;
                    if ((i ^ j) % 2)
                        p.push_back(x);
                    else
                        q.push_back(x);
                }
            for (i = 0; i < n; i++)

                for (j = 0; j < m; j++) {
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
            if (p == r && q == s)
                puts("yes");
            else
                puts("no");
        }
    }
    return 0;
}