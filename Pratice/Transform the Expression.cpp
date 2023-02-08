#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
      int n;
	    string a,b;
	    cin>>a;

      stack<char> st;

      for (int i = 0; a[i] !='\0'; i++) {
        if(a[i]>='a' and a[i]<='z'){
          b+=a[i];
        }else if(a[i]=='+' ||a[i]=='-' || a[i]=='*' || a[i]=='^' ||a[i]=='/' || a[i]=='%'){
          st.push(a[i]);
        }else if(a[i]=='('){
          continue;
        }else if(a[i]==')'){
          b+=st.top();
          st.pop();
        }
      }


      cout<<b<<endl;
      	    
  }
  
  return 0;
}