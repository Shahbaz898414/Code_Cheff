#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int32_t main() {
	int t;
	cin>>t;
	while(t--){

    ll n,a,b;cin>>n;
    ll arr[n];
    ll bob=0,alice=0,both=0;

    for (int i=0; i<n;i++) { 
      cin>>arr[i];

      if(arr[i]%a==0 and arr[i]%b==0){
        both++;
      }
      else if(arr[i]%a==0){
       bob++;
      }else if(arr[i]%b==0){
        alice++;
      }
    }

    // cout<<alice<<endl;
    // cout<<bob<<endl;
    // cout<<both<<endl;

    // cout<<endl;


  //  if(both==0){
     if(bob>=alice){
       cout<<"BOB\n";
     }else{
       cout<<"ALICE\n";
     }
  //  }else{
  //    if(alice>bob){
  //      cout<<"ALICE\n";
  //    }else{
  //      cout<<"BOB\n";
  //    }
  //  }
    
	}
	return 0;
}

