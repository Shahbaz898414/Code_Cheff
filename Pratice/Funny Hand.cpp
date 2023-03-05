#include<bits/stdc++.h>
#define ll long long
using namespace std;




int main() {
  int t;cin>>t;
  while(t--) { 
    ll n,m,k;cin>>n>>m>>k;
    // string s;cin>>s;

    // ll len=s.size();
    float p=0;
    if((m-k!=1 and m-k!=-1) and (m-k!=2 and m-k!=-2)){
      p=0;
    }else if(m==1 || k==1 ||m==n || k==n || m-k==2 ||m-k==-2){
      p=1;
    }else p=2;

    cout<<p<<endl;

   
    


  }
   


  return 0;
}