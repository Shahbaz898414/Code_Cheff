#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string rotate_str(string s,int n){
    char c = s[n-1];
    for(int i=n-1;i>=1;i--){
        s[i]=s[i-1];
    }
    s[0]=c;
    return s;
}

int32_t main() {
	int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int d =pow(2, n);
        vector<int> v(25);
        v[0] = d /2;
        v[1] = d /4;
        for (int i= 2; i < n; ++ i)
           v[i] = (v[i- 1] + v[i - 2]) /2;
        cout << v[n -1] << ' ' << d << ' ';
    }
    return 0;
   





    
    
	
	return 0;
}

