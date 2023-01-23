#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
   int n,x=0,y=0;cin>>n;
   string str;cin>>str;
   set<char> s;

   s.insert('a');
   s.insert('e');
   s.insert('i');
   s.insert('o');
   s.insert('u');

   for (int i = 0; i < n; i++)
   {
    /* code */
    if(!s.count(str[i])){
      x++;
    }else{
      x=0;
    }

    if(x>=4){
      y=1;
      break;
    }
   }
   if(y==0)
    cout<<"YES"<<endl;
   else{
    cout<<"NO"<<endl;
   }
   

  //  for(auto it:s){
  //   cout<<it<<" ";
  //  }

  }
}
