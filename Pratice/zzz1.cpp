#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		long long ans = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			ans = max(ans, a[i] * (i + 1));
		}
		cout << ans << endl;
	}
	return 0;
}