#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
 	int t;cin>>t;

	while(t--) {
	  int mean,median;cin>>mean>>median;

    if(mean==median) cout<< mean<<" "<<mean<<" "<<mean<<endl;
    else {

      int g1=min(3*mean-2*median,median);
      int g2=max(3*mean-2*median,median);
      cout<<g1<<" "<<median<<" "<<g2<<endl;
    }
    
	}
  return 0;
}

