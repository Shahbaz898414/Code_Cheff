<<<<<<< HEAD
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
    ll n,m,k;
    cin>>n;

    string s;cin>>s;

    int z=0,o=0;

   for (int i = 0; i <n; i++)
   {
    /* code */
    if(s[i]=='0') z++;
    else o++;
   }

   if(z==o) cout<<z<<endl;
   else if(z<o) cout<<z+1<<endl;
   else{
    cout<<o<<endl;
   }
   

    
   

    
  
  
  
  }
  
  return 0;
=======
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

  int t;cin>>t;
  while(t--) {
    ll n,m,k;
    cin>>n;

    string s;cin>>s;

    int z=0,o=0;

   for (int i = 0; i <n; i++)
   {
    /* code */
    if(s[i]=='0') z++;
    else o++;
   }

   if(z==o) cout<<z<<endl;
   else if(z<o) cout<<z+1<<endl;
   else{
    cout<<o<<endl;
   }
   

    
   

    
  
  
  
  }
  
  return 0;
>>>>>>> origin/main
}