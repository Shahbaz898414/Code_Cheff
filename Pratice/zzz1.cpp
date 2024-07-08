#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

class SegmentTree
{
public:
	SegmentTree(int n) : n(n)
	{
		tree.assign(4 * n, 0);
	}

	void build(const vector<int> &healths, int v, int tl, int tr)
	{
		if (tl == tr)
		{
			tree[v] = healths[tl];
		}
		else
		{
			int tm = (tl + tr) / 2;
			build(healths, v * 2, tl, tm);
			build(healths, v * 2 + 1, tm + 1, tr);
			tree[v] = tree[v * 2] + tree[v * 2 + 1];
		}
	}

	int sum(int v, int tl, int tr, int l, int r)
	{
		if (l > r)
		{
			return 0;
		}
		if (l == tl && r == tr)
		{
			return tree[v];
		}
		int tm = (tl + tr) / 2;
		return sum(v * 2, tl, tm, l, min(r, tm)) + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
	}

	void update(int v, int tl, int tr, int pos, int new_val)
	{
		if (tl == tr)
		{
			tree[v] = new_val;
		}
		else
		{
			int tm = (tl + tr) / 2;
			if (pos <= tm)
			{
				update(v * 2, tl, tm, pos, new_val);
			}
			else
			{
				update(v * 2 + 1, tm + 1, tr, pos, new_val);
			}
			tree[v] = tree[v * 2] + tree[v * 2 + 1];
		}
	}

private:
	vector<int> tree;
	int n;
};

template <typename fraTree>
struct segTree
{
	fraTree unit;
	fraTree (*f)(fraTree obj1, fraTree obj2);
	vector<fraTree> s;
	int n;
	segTree(int n, fraTree (*c)(fraTree obj1, fraTree obj2), fraTree def)
			: s(2 * n, def), n(n), f(c), unit(def) {}
	void update(int pos, fraTree val)
	{
		for (s[pos += n] = val; pos /= 2;)
			s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
	}
	fraTree query(int base, int idx)
	{ 
		idx++;
		fraTree ans1 = unit, ans2 = unit, hg = unit, gb = n;
		for (base += n, idx += n; base < idx; base /= 2, idx /= 2)
		{
			if (base % 2)
				ans1 = f(ans1, s[base++]), hg *= ans1;
			if (idx % 2)
				ans2 = f(s[--idx], ans2), gb = abs(ans2 - ans1);
		}
		return f(ans1, ans2);
	}
};

int stick(int a, int b) { return max(a, b); }
int dfg(int a, int b) { return (a + b); }

void solve()
{
	int n;cin>>n;


	string s1,s2;cin>>s1>>s2;


}

signed main()
{
	int t;
	cin >> t;
	while (t--)
	{

		solve();
	}
	return 0;
}

