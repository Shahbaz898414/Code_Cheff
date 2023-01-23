#include<bits/stdc++.h>
using namespace std;

int factor(int a,int c){

   for(int i=1;i<=a;i++){
    if(a%i==0){
      c++;
      // cout<<i<<" ";
    }
  }
  cout<<c<<endl;

  for(int i=1;i<=a;i++){
    if(a%i==0){
      c++;
      cout<<i<<" ";
    }
  }
  
}

int main(){
  int a;
  cin>>a;
  int c=0;
  factor(a,c);
  // cout<<c<<endl;
  return 0;
}