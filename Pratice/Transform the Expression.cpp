#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
      int n;
	    string a,b,d,c;
	    cin>>a;

      stack<char> st;



      for (int i = 0; a[i] !='\0'; i++) {
        if(a[i]>='a' and a[i]<='z'){
          b+=a[i];
          d+=a[i];
        }else if(a[i]=='+' ||a[i]=='-' || a[i]=='*' || a[i]=='^' ||a[i]=='/' || a[i]=='%'){
          st.push(a[i]);
          c+=st.top();
        }else if(a[i]=='('){
          continue;
        }else if(a[i]==')'){
          b+=st.top();
          st.pop();
        }
      }

      // cout<<c<<endl;
      // cout<<d<<endl;


      cout<<b<<endl;
      	    
  }
  
  return 0;
}