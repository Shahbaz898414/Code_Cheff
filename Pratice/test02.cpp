#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

  int t,n,m,i,j,max,z1,z2;
	char a[500][500];
	cin>>t;
	while(t--){
		cin>>n>>m;
		max=z2=0;
		z1=2;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]=='1'){
					max++;
					if((i*j)!=0&&(a[i-1][j]=='0'&&a[i][j-1]=='0')){
						z2=1;
					}
				}else{
					z1=1;
					if(i!=0&&a[i-1][j]=='0'||j!=0&&a[i][j-1]=='0'||i*j!=0&&a[i-1][j-1]=='0'){
						z2=1;
					}
				}
			}
		}
		cout<<max-z1+z2<<endl;
	}

  return 0;
}

