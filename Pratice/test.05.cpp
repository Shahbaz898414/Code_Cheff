#include <bits/stdc++.h>
using namespace std;

#define int long long



int qwd(vector<int> &ui, int n)
{
    vector<int> df(n, 0);
    vector<int> uy(n, 0);
    stack<int> fg;
    set<int> re;

    df[0] = -1;
    fg.push(ui[0]);
    for (int i = 1; i < n; i++)
    {
        while (fg.size() > 0 && ui[i] > fg.top())
        {
            fg.pop();
        }
        if (fg.size() == 0)
        {
            df[i] = -1;
        }
        else
        {
            df[i] = fg.top();
        }
        fg.push(ui[i]);
    }
    while (fg.size() > 0)
    {
        fg.pop();
    }

    uy[n - 1] = -1;
    fg.push(ui[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (fg.size() > 0 && ui[i] >= fg.top())
        {
            fg.pop();
        }
        if (fg.size() != 0)
        {
            uy[i] = fg.top();
        }
        else
        {
            uy[i] = -1;
        }
        fg.push(ui[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (df[i] != -1)
        {
            re.insert(df[i] - ui[i]);
        }
        if (uy[i] != -1)
        {
            re.insert(uy[i] - ui[i]);
        }
    }

    int d = re.size();

    return d;
}
// void solve(){
//     int n;cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++)cin>>a[i];
//     cout<<qwd(a,n)<<"\n";
// }

signed main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int h;
        cin >> h;
        vector<int> v(h);
        for (int i = 0; i < h; i++)
            cin >> v[i];
        cout << qwd(v, h) << "\n";
    }
    return 0;
}