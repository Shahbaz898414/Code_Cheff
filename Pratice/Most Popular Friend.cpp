<<<<<<< HEAD

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define line cout << endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define printv(v)                      \
  for (int i = 0; i < (v.size()); i++) \
  {                                    \
    cout << v[i] << " ";               \
  }                                    \
  line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define tk(x) \
  int x;      \
  cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif
template <class T>
void _print(T t) {
  cerr << t;
}

template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}

template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v){
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(vector<vector<T>> v) {
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++) { 
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
  }
  cerr << "]";
}

template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

const long long inf = 1e18;
const int MOD = 1e9+7;
const int MAX = 1e6;

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

void rotateMatrix(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}


vector<bool> is_prime(10001, 1);
vector<int> primes;

void seive() {
    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i < 10001; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < 10001; j += i) {
                is_prime[j] = 0;
            }
        }
    }
}


double bfs (vector<vector<ll>> adj_list){
    double arr[adj_list.size()]={0};
   // cout<<"size of list is : "<<adj_list.size()<<"\n";
    
    for(int i=1;i<adj_list.size();i++){
       // cout<<"\n"<<"starting new bfs with node : "<<i<<"\n";
        ll visited[adj_list.size()]={0};
        queue<ll> q ;
        int current_node=i;
        visited[i]=1;
        q.push(i);
        while(!q.empty()){
            current_node=q.front();
            q.pop();
           // cout<<"current node  : "<<current_node<<"\n";
            for(int j=0;j<adj_list[current_node].size();j++){
                if(visited[adj_list[current_node][j]]==0){
                    
                    q.push(adj_list[current_node][j]);
                    visited[adj_list[current_node][j]]=visited[current_node]+1;
                //    cout<<adj_list[current_node][j]<<"  "<<"its value is "<<visited[adj_list[current_node][j]]<<"   ";
                
                }
                
                
            }
           // cout<<"\n";
        }
        double sum=0;
        for(int k=0;k<adj_list.size();k++){
            if(i==4){
            //cout<<"the dist of node "<<k<<" from 4 is "<<visited[k]<<"\n";
        }
            sum=sum+visited[k]-1;
            
        }
        if(i==4){
           // cout<<"the sum for 4 is "<<sum<<"\n";
        }
        sum=(sum+1)/double(adj_list.size()-1);
        arr[i]=sum;
       // cout<<"the avd dist for this node is : "<<sum<<"\n";
        
        
        
    }
    double min=100000000;
    int min_idx=0;
    for(int i=1;i<adj_list.size();i++){
        if(arr[i]<min){
            min=arr[i];
           // cout<<"arr[i] "<<arr[i]<<" ";
            min_idx=i;
        }
    }
    cout<<min_idx<<" "<<min<<"\n";
    return min;
    
    
}

int32_t  main() {

  int t,n,pt;
	cin>>t;
	
	cout<<fixed<<setprecision(6);
	while(t--){
	    cin>>n;
	    vector<vector<ll>> adj(n+1);
        for(ll i = 1; i <= n; i++){
            while(true){
                ll x;
                cin>>x;
                
                adj[i].push_back(x);
                
                if(cin.peek() == '\n' || cin.peek() == EOF){
                    //cin>>pt;
                    break;
                }
            }
        }
        
        double ans;
        ans=bfs(adj);
        //cout<<"the ans is "<<ans<<"\n";
        
        
	    
	    
	}
   
   
  
   return 0;
}

=======

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define Time cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define pb push_back
#define mp make_pair
#define line cout << endl;
#define ff first
#define ss second
#define vi vector<int>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define printv(v)                      \
  for (int i = 0; i < (v.size()); i++) \
  {                                    \
    cout << v[i] << " ";               \
  }                                    \
  line;
#define onesbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define sp(x, y) fixed << setprecision(y) << x
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define tk(x) \
  int x;      \
  cin >> x;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif
template <class T>
void _print(T t) {
  cerr << t;
}

template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}

template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v){
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(vector<vector<T>> v) {
  cerr << "[\n";
  for (int l = 0; l < v.size(); l++) { 
    {
      for (int k = 0; k < v[l].size(); k++)
        cerr << v[l][k] << " ";
    }
    cerr << "\n";
  }
  cerr << "]";
}

template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

const long long inf = 1e18;
const int MOD = 1e9+7;
const int MAX = 1e6;

bool isValid(string s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i])
      return false;
  }
  return true;
}

void rotateMatrix(vector<vector<int>> &v, int n) {
  for(int i = 0; i < n / 2; i++){
    for(int j = i; j < n - i - 1; j++) {
      int ptr = v[i][j];
      v[i][j] = v[n - 1 - j][i];
      v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
      v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
      v[j][n - 1 - i] = ptr;
    }
  }
}


vector<bool> is_prime(10001, 1);
vector<int> primes;

void seive() {
    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i < 10001; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < 10001; j += i) {
                is_prime[j] = 0;
            }
        }
    }
}


double bfs (vector<vector<ll>> adj_list){
    double arr[adj_list.size()]={0};
   // cout<<"size of list is : "<<adj_list.size()<<"\n";
    
    for(int i=1;i<adj_list.size();i++){
       // cout<<"\n"<<"starting new bfs with node : "<<i<<"\n";
        ll visited[adj_list.size()]={0};
        queue<ll> q ;
        int current_node=i;
        visited[i]=1;
        q.push(i);
        while(!q.empty()){
            current_node=q.front();
            q.pop();
           // cout<<"current node  : "<<current_node<<"\n";
            for(int j=0;j<adj_list[current_node].size();j++){
                if(visited[adj_list[current_node][j]]==0){
                    
                    q.push(adj_list[current_node][j]);
                    visited[adj_list[current_node][j]]=visited[current_node]+1;
                //    cout<<adj_list[current_node][j]<<"  "<<"its value is "<<visited[adj_list[current_node][j]]<<"   ";
                
                }
                
                
            }
           // cout<<"\n";
        }
        double sum=0;
        for(int k=0;k<adj_list.size();k++){
            if(i==4){
            //cout<<"the dist of node "<<k<<" from 4 is "<<visited[k]<<"\n";
        }
            sum=sum+visited[k]-1;
            
        }
        if(i==4){
           // cout<<"the sum for 4 is "<<sum<<"\n";
        }
        sum=(sum+1)/double(adj_list.size()-1);
        arr[i]=sum;
       // cout<<"the avd dist for this node is : "<<sum<<"\n";
        
        
        
    }
    double min=100000000;
    int min_idx=0;
    for(int i=1;i<adj_list.size();i++){
        if(arr[i]<min){
            min=arr[i];
           // cout<<"arr[i] "<<arr[i]<<" ";
            min_idx=i;
        }
    }
    cout<<min_idx<<" "<<min<<"\n";
    return min;
    
    
}

int32_t  main() {

  int t,n,pt;
	cin>>t;
	
	cout<<fixed<<setprecision(6);
	while(t--){
	    cin>>n;
	    vector<vector<ll>> adj(n+1);
        for(ll i = 1; i <= n; i++){
            while(true){
                ll x;
                cin>>x;
                
                adj[i].push_back(x);
                
                if(cin.peek() == '\n' || cin.peek() == EOF){
                    //cin>>pt;
                    break;
                }
            }
        }
        
        double ans;
        ans=bfs(adj);
        //cout<<"the ans is "<<ans<<"\n";
        
        
	    
	    
	}
   
   
  
   return 0;
}

>>>>>>> origin/main
