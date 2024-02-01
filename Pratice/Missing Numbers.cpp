#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int sub, int div, int add, int mul, int &a, int &b) {

	if (a != -1 && b != -1)  return;
	
	int num1 = (add + sub) / 2, num2 = add - num1;


	if (num1 < 1 || num1 > 10000 || num2 < 1 || num2 > 10000) return;


	if ((num1 * num2 == mul) && (num2 != 0 && num1 / num2 == div)) {
		a = num1;
		b = num2;
	}


}

int32_t main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> v;
		for (int i = 0; i < 4; i++)
		{
			int x;
			cin >> x;

			v.push_back(x);
		}
		sort(v.begin(), v.end());

		int a = -1, b = -1;

		solve(v[0], v[1], v[2], v[3], a, b);

		solve(v[1], v[0], v[2], v[3], a, b);

		solve(v[0], v[1], v[3], v[2], a, b);

		solve(v[1], v[0], v[3], v[2], a, b);

		cout << a << " " << b << endl;


	}
	return 0;
}
