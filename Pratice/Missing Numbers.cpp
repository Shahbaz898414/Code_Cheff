#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool chk(int a,int b,vector<int>v){
    vector<int>temp;
    if(a<1 or b<1 or a>10000 or b>10000)
        return false;
    temp.push_back(a+b);
    temp.push_back(a-b);
    temp.push_back(a*b);
    temp.push_back(a/b);
    sort(temp.begin(),temp.end());
    if(temp==v)
        return true;
    return false;
}


int32_t main() {
	int t;
	cin>>t;
	while(t--){
	    
	}
	return 0;
}

