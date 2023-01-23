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
	    vector<int>v(4);
	    for(int i=0;i<4;i++)
	        cin>>v[i];
	        
	    sort(v.begin(),v.end());
	    int a,b;
	    bool flag=true;
	    for(int i=0;i<3;i++){
	        bool ineerflag=true;
	        for(int j=i+1;j<4;j++){
	            int x=v[i];
	            int y=v[j];
	            a=(x+y)/2;
	            b=(y-x)/2;
	            if(chk(a,b,v)){
	                cout<<a<<" "<<b<<endl;
	                flag=false;
	                ineerflag=false;
	                break;
	            }
	            
	        }
	        if(!ineerflag)
	            break;
	    }
	    if(flag){
	        cout<<"-1 -1"<<endl;
	    }
	}
	return 0;
}

