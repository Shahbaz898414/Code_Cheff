#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    string ans="";
	    string tw="";
	    if(x%2 ==0 and y>=2){
	        for(int i=0; i<x/2;i++){
	            ans+='a';
	        }
	        for(int j=0;j<y;j++){
	            ans+='b';
	        }
	        for(int i= x/2;i<x;i++){
	            ans+='a';
	        }
	        
	        tw+='b';
	        for(int i=0; i<x/2;i++){
	            tw+='a';
	        }
	        for(int j=0;j<y-2;j++){
	            tw+='b';
	        }
	        for(int i=0; i<x/2;i++){
	            tw+='a';
	        }
	        tw+='b';
	        cout<<ans<<endl;
	        cout << tw <<endl;
	    }
	    else if(y%2 ==0 and x>=2){
	        for(int i=0; i<y/2;i++){
	            ans+='b';
	        }
	        for(int j=0;j<x;j++){
	            ans+='a';
	        }
	        for(int i= y/2;i<y;i++){
	            ans+='b';
	        }
	        cout<<ans<<endl;
	        tw+='a';
	        for(int i=0; i<y/2;i++){
	            tw+='b';
	        }
	        for(int j=0;j<x-2;j++){
	            tw+='a';
	        }
	        for(int i=0; i<y/2;i++){
	            tw+='b';
	        }
	        tw+='a';
	        cout<<tw<<endl;
	    }
	    else cout<< "-1\n";
	}
	return 0;
}
