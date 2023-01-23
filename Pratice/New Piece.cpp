#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

 	int t;
	cin>>t;
	while(t--){
	  int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;

    int  a[9][9]={0};

    for (int i = 1; i <=8; i++) {
      for(int j=1;j<=8;j++){
        
        if(i%2 and j%2){
          a[i][j]=1;
        }else if(i%2==0 and j%2==0) {
          a[i][j]=1;
        }
        // cout<<a[i][j]<< " ";
      }
      // cout<<endl;
    }

    if(r1==r2 and c1==c2){
      cout<<0<<endl;
    }else{
      if(a[r1][c1]==a[r2][c2]){
        cout<<2<<endl;
      }else {
        cout<<1<<endl;
      }
    }
    
    
    
	}

  return 0;
}

