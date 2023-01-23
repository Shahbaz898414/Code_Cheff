#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int o=a+b;
  int s=a+c;
  int t=b+c;
 if(o>s and o>t){
   int m = min(a,b);
   cout<<m<<endl;
 }
 else if(s>o and s>t){
   int m = min(a,c);
   cout<<m<<endl;
 }else{
   int m = min(b,c);
   cout<<m<<endl;
 }
  return 0;
}