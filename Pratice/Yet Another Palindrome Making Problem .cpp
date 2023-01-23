#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
   int n,x=0,y=0;cin>>n;
   string str,str2,ans="YES";cin>>str;

   vector<char> odd,eve;

   for (int i = 0; i <n; i++) {
    if(i%2)
      odd.push_back(str[i]);
    else
      eve.push_back(str[i]);
   }
   sort(odd.begin(),odd.end());
   sort(eve.begin(),eve.end());
   
   for (int i = 0; i <n/2; i++)
   {
    /* code */
    if(odd[i]!=eve[i]){
      ans="NO";
      break;
    }
   }
   

   cout<<ans<<endl;
  }
}
