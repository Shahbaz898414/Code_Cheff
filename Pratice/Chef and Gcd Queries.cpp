#include <bits/stdc++.h>

using namespace std;
#define ll long long



// template<class T, class U>
// // T -> node, U->update.
// struct Lsegtree{
//     vector<T>st;
//     vector<U>lazy;
//     ll n;
//     T identity_element;
//     U identity_update;
//     Lsegtree(ll n, T identity_element, U identity_update)
//     {
//         this->n = n;
//         this->identity_element = identity_element;
//         this->identity_update = identity_update;
//         st.assign(4*n,identity_element);
//         lazy.assign(4*n, identity_update);
//     }
//     T combine(T l, T r)
//     {
//         // change this function as required.
//         T ans = (l + r);
//         return ans;
//     }
//     void buildUtil(ll v, ll tl, ll tr, vector<T>&a)
//     {
//         if(tl == tr)
//         {
//             st[v] = a[tl];
//             return;
//         }
//         ll tm = (tl + tr)>>1;
//         buildUtil(2*v + 1, tl, tm,a);
//         buildUtil(2*v + 2,tm+1,tr,a);
//         st[v] = combine(st[2*v + 1], st[2*v + 2]);
//     }
//     // change the following 2 functions, and you're more or less done.
//     T apply(T curr, U upd, ll tl, ll tr)
//     {
//         T ans = (tr-tl+1)*upd;
//         return ans;
//     }
//     U combineUpdate(U old_upd, U new_upd, ll tl, ll tr)
//     {
//         U ans = old_upd;
//         ans=new_upd;
//         return ans;
//     }  
//     void push_down(ll v, ll tl, ll tr)
//     {
//         if(lazy[v] == identity_update)return;
//         st[v] = apply(st[v], lazy[v], tl, tr);
//         if(2*v + 2 < 4*n)
//         {
//             ll tm = (tl + tr)>>1;
//             lazy[2*v + 1] = combineUpdate(lazy[2*v+1], lazy[v], tl, tm);
//             lazy[2*v + 2] = combineUpdate(lazy[2*v+2], lazy[v], tm+1,tr);            
//         }
//         lazy[v] = identity_update;
//     }
//     T queryUtil(ll v, ll tl, ll tr, ll l, ll r)
//     {
//         push_down(v,tl,tr);
//         if(l > r)return identity_element;
//         if(tr < l or tl > r)
//         {
//             return identity_element;
//         }
//         if(l <= tl and r >= tr)
//         {
//             return st[v];
//         }
//         ll tm = (tl + tr)>>1;
//         return combine(queryUtil(2*v+1,tl,tm,l,r), queryUtil(2*v+2,tm+1,tr,l,r));
//     }
 
//     void updateUtil(ll v, ll tl, ll tr, ll l, ll r, U upd)
//     {
//         push_down(v,tl,tr); 
//         if(tr < l or tl > r)return;
//         if(tl >=l and tr <=r)
//         {
//             lazy[v] = combineUpdate(lazy[v],upd,tl,tr);
//             push_down(v,tl,tr);
//         }
//         else
//         {
//             ll tm = (tl + tr)>>1;
//             updateUtil(2*v+1,tl,tm,l,r,upd);
//             updateUtil(2*v+2,tm+1,tr,l,r,upd);
//             st[v] = combine(st[2*v + 1], st[2*v+2]);
//         }
//     }



//     void build(vector<T>a)
//     {
//         assert(sz(a) == n);
//         buildUtil(0,0,n-1,a);
//     }
//     T query(ll l, ll r)
//     {
//         return queryUtil(0,0,n-1,l,r);
//     }
//     void update(ll l,ll r, U upd)
//     {
//         updateUtil(0,0,n-1,l,r,upd);
//     }
// };


const int Max = 100001;
int hsh[Max];
int prime[Max];
int Array[50001];
vector< int > Factor[Max];
int Cnt[250][Max];
 
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
 
vector< int > factorize(int num){
    vector< int > res;
    while(num > 1){
        int p = prime[num];
        num /= p;
        if(!hsh[p]) res.push_back(p);
        hsh[p] = 1;
    }
    for(int i = 0 ; i < res.size() ; ++i) hsh[res[i]] = 0;
    return res;
}
 
void pre(){
    for(int i = 2 ;  i < Max ; ++i) prime[i] = i;
    for(int i = 2 ; i * i < Max ; ++i)
        if(prime[i] == i)
            for(int j = i + i ; j < Max ; j += i)
                prime[j] = i;
    for(int i = 2 ; i < Max ; ++i)
        Factor[i] = factorize(i);
}
 
int solve(int index, int num){
    int ans = 0;
    int sz  = (int)Factor[num].size();
    for(int i = 1 ; i < 1 << sz ; ++i){
        int mul = 1;
        int ct  = 0;
        for(int j = 0 ; j < sz ; ++j){
            if(1 << j & i)
                mul *= Factor[num][j] , ++ct;
        }
        if(ct & 1) ans += Cnt[index][mul]; else
            ans -= Cnt[index][mul];
    }
    return ans;
}
 
int query(int id, int sq, int x){
    if(!id) return 0;
    int res = 0;
    int times = id/sq;
    for(int i = 0 ; i < times ; ++i)
        res += solve(i, x);
    for(int i = id ; i/sq == times && i > 0 ; --i)
        if(gcd(x, Array[i]) > 1) ++res;
    return res;
}
 
void add(int num, int index, int val){
    int sz = (int)Factor[num].size();
    for(int i = 1 ; i < 1 << sz ; ++i){
        int mul = 1;
        for(int j = 0 ; j < sz ; ++j){
            if(1 << j & i)
                mul *= Factor[num][j];
        }
        Cnt[index][mul] += val;
    }
}
 



int main()
{




   pre();
    int N, Q;
    scanf("%d", &N);
    int sq = sqrt(N);
    for(int i = 1 ; i <= N ; ++i){
        scanf("%d", Array + i);
        add(Array[i], i/sq, 1);
    }
    scanf("%d",&Q);
    while(Q--){
        int type;
        scanf("%d", &type);
        if(type == 1){
            int id, x;
            scanf("%d%d", &id, &x);
            add(Array[id], id/sq, -1);
            Array[id] = x;
            add(Array[id], id/sq, 1);
        } else {
            int l, r, x;
            scanf("%d %d %d", &l, &r, &x);
            int res = r - l + 1 - query(r, sq, x) + query(l - 1, sq, x);
            printf("%d\n", res);
        }
    }

  // int t;
  // cin >> t;

  // while (t--) {
  //   ll n;cin>>n;

  //   vector<ll>  arr(n);

  //   for (ll i = 0; i < n; i++)
  //   {
  //     /* code */
  //     cin>>arr[i];
  //   }



  //   ll q;cin>>q;

  //   while(q-->0) {


  //     ll x;cin>>x;


  //     if(x==1){

  //       int y;cin>>y;
        

  //     }else{



  //     }


  //   }
    


  // }
  return 0;
}





/*



Chef likes solving problems involving a lot of queries with numbers. One day, he found a new problem which he finds difficult to solve. Therefore, he's asking for your help!

You are given a sequence A1, A2, ..., AN and Q queries. There are two types of queries:
1 X Y — Set AX = Y.
2 L R G — Compute the number of indices i such that L ≤ i ≤ R and gcd(G, Ai) = 1.

Find the answer to each query of the second type.  Note: gcd(X, Y) denotes the greatest common divisor — the highest positive integer which divides both X and Y.


*/