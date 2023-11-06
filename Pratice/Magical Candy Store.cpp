#include <bits/stdc++.h>

using namespace std;
#define M 1000000007
#define ll long long
#define fo(i, a, n) for (ll i = a; i < n; i++)

template <class T, class U>
// T -> node, U->update.
struct Lsegtree
{
  vector<T> st;
  vector<U> lazy;
  ll n;
  T identity_element;
  U identity_update;
  Lsegtree(ll n, T identity_element, U identity_update)
  {
    this->n = n;
    this->identity_element = identity_element;
    this->identity_update = identity_update;
    st.assign(4 * n, identity_element);
    lazy.assign(4 * n, identity_update);
  }
  T combine(T l, T r)
  {
    // change this function as required.
    T ans = (l + r);
    return ans;
  }
  void buildUtil(ll v, ll tl, ll tr, vector<T> &a)
  {
    if (tl == tr)
    {
      st[v] = a[tl];
      return;
    }
    ll tm = (tl + tr) >> 1;
    buildUtil(2 * v + 1, tl, tm, a);
    buildUtil(2 * v + 2, tm + 1, tr, a);
    st[v] = combine(st[2 * v + 1], st[2 * v + 2]);
  }
  // change the following 2 functions, and you're more or less done.
  T apply(T curr, U upd, ll tl, ll tr)
  {
    T ans = (tr - tl + 1) * upd;
    return ans;
  }
  U combineUpdate(U old_upd, U new_upd, ll tl, ll tr)
  {
    U ans = old_upd;
    ans = new_upd;
    return ans;
  }
  void push_down(ll v, ll tl, ll tr)
  {
    if (lazy[v] == identity_update)
      return;
    st[v] = apply(st[v], lazy[v], tl, tr);
    if (2 * v + 2 < 4 * n)
    {
      ll tm = (tl + tr) >> 1;
      lazy[2 * v + 1] = combineUpdate(lazy[2 * v + 1], lazy[v], tl, tm);
      lazy[2 * v + 2] = combineUpdate(lazy[2 * v + 2], lazy[v], tm + 1, tr);
    }
    lazy[v] = identity_update;
  }
  T queryUtil(ll v, ll tl, ll tr, ll l, ll r)
  {
    push_down(v, tl, tr);
    if (l > r)
      return identity_element;
    if (tr < l or tl > r)
    {
      return identity_element;
    }
    if (l <= tl and r >= tr)
    {
      return st[v];
    }
    ll tm = (tl + tr) >> 1;
    return combine(queryUtil(2 * v + 1, tl, tm, l, r), queryUtil(2 * v + 2, tm + 1, tr, l, r));
  }

  void updateUtil(ll v, ll tl, ll tr, ll l, ll r, U upd)
  {
    push_down(v, tl, tr);
    if (tr < l or tl > r)
      return;
    if (tl >= l and tr <= r)
    {
      lazy[v] = combineUpdate(lazy[v], upd, tl, tr);
      push_down(v, tl, tr);
    }
    else
    {
      ll tm = (tl + tr) >> 1;
      updateUtil(2 * v + 1, tl, tm, l, r, upd);
      updateUtil(2 * v + 2, tm + 1, tr, l, r, upd);
      st[v] = combine(st[2 * v + 1], st[2 * v + 2]);
    }
  }

  void build(vector<T> a)
  {
    assert(sz(a) == n);
    buildUtil(0, 0, n - 1, a);
  }
  T query(ll l, ll r)
  {
    return queryUtil(0, 0, n - 1, l, r);
  }
  void update(ll l, ll r, U upd)
  {
    updateUtil(0, 0, n - 1, l, r, upd);
  }
};

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t, n, i, j, ans, q;
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll a[n + 1], pref[n + 1];
    for (ll i = 1; i <= n; i++)
      cin >> a[i];
    ll f = 0, in, sum = 0;
    for (ll i = 1; i <= n; i++)
    {
      if (a[i] == 1 && i == 1)
      {
        f = 1;
        break;
      }
      else if (a[i] == 1 && i == n)
      {
        f = 0;
        break;
      }
      else if (a[i] == 1)
      {
        f = 2;
        in = i;
        break;
      }
    }

    pref[0] = 0;
    if (!f)
    {
      fo(i, 1, n)
          pref[i] = (pref[i - 1] + ((a[i] & 1) ? (a[i] - 1) : a[i])) % M;
      if (a[n] & 1)
        pref[n] = (pref[n - 1] + a[n]) % M;
      else
        pref[n] = (pref[n - 1] + a[n] - 1) % M;
      pref[0] = pref[n];
    }
    else if (f == 2)
    {
      fo(i, 1, n)
      {
        if (i == in)
        {
          pref[i] = pref[i - 1];
          continue;
        }
        if (i + 1 == in)
          pref[i] = (pref[i - 1] + ((a[i] & 1) ? (a[i]) : (a[i] - 1))) % M;
        else
          pref[i] = (pref[i - 1] + ((a[i] & 1) ? (a[i] - 1) : a[i])) % M;
      }
      if (a[n] & 1)
        pref[n] = (pref[n - 1] + a[n]) % M;
      else
        pref[n] = (pref[n - 1] + a[n] - 1) % M;
      pref[0] = pref[n];
    }

    cin >> q;
    while (q--)
    {
      ll r;
      cin >> r;

      if (f == 1)
      {
        ans = (r / n) % M;
        if (r % n)
          ans++;
        if (r != 1 && r % (n) == 1)
          ans--;
        cout << ans % M << endl;
        continue;
      }
      // else
      ans = (((r / n) % M) * (pref[n] % M)) % M;
      if (r % n != 0)
        ans = (ans + pref[r % (n)]) % M;

      if (!f)
      {
        if (r % (n) != 0 && (a[r % (n)] & 1))
          ans++;
        if (r % n == 0 && (a[n] % 2 == 0))
          ans++;
        cout << ans % M << endl;
        continue;
      }

      if (f == 2)
      {
        if (r % (n) != 0 && r % n != in - 1 && r % n != in && (a[r % (n)] & 1))
          ans++;
        if (r % n == 0 && (a[n] % 2 == 0))
          ans++;
        if (r % n == in - 1 && a[r % n] % 2 == 0)
          ans++;
        if (r % n == in && a[in - 1] % 2 == 0)
          ans += 2;
        cout << ans % M << endl;
        continue;
      }
    }
  }

  return 0;
}
