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

	int t;cin>>t;

	while(t--){
		ll n;cin>>n;
    if(n%2==0){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
      
	        string s="";
	        int i;
	        for(i=0;i<(n+1)/2;i++){
	            s+='0';
	        }
	        for(;i<n;i++){
	            s+='1';
	        }
	        for(int j=0;j<n;j++){
	            cout<<s;
	            cout<<endl;
	            s = rotate_str(s,n);
	        }
    }


	}

   





    
    
	
	return 0;
}

