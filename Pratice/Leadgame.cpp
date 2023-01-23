#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int p1,p2,sum1=0,sum2=0,dif=0,lead=0,winner;
  for(int i=0;i<n;i++){
    cin>>p1;
    cin>>p2;
    sum1 +=p1;
    sum2+=p2;
    if(sum1>sum2){
      dif=sum1-sum2;
      if(dif>lead){
        lead=dif;
        winner=1;
      }
    }
    else{
      dif=sum2-sum1;
      if(dif>lead){
        lead=dif;
        winner=2;
      }
    }
}

cout<<winner<<" "<<lead;
     return 0;
}
 
