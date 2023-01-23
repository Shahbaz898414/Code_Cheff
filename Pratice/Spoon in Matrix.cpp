#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

 	int t;
	cin>>t;
	while(t--){
	    int r,c;cin>>r>>c;
        char arr[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        
        bool flag1=0,flag2=0;
        for(int i=0;i<r;i++) {
            for(int j=0;j<c-4;j++) {
                if(arr[i][j] == 's' ||  arr[i][j] == 'S' ) {
                    if(arr[i][j+1] == 'p' || arr[i][j+1] == 'P')
                    if(arr[i][j+2] == 'o' || arr[i][j+2] == 'O')
                    if(arr[i][j+3] == 'o' || arr[i][j+3] == 'O')
                    if(arr[i][j+4] == 'n' || arr[i][j+4] == 'N') {
                        flag1=1;
                        break;
                    }
                }
            }
        }
        
        for(int i=0;i<c;i++){
            for(int j=0;j<r-4;j++) {
                if(arr[j][i]=='s' || arr[j][i]=='S') {
                    if(arr[j+1][i] == 'p' || arr[j+1][i] == 'P')
                    if(arr[j+2][i] == 'o' || arr[j+2][i] == 'O')
                    if(arr[j+3][i] == 'o' || arr[j+3][i] == 'O')
                    if(arr[j+4][i] == 'n' || arr[j+4][i] == 'N') {
                        flag2=1;
                        break;
                    }
                }
            }
        }
        
        if(flag1==1 || flag2==1)  cout<<"There is a spoon!"<<endl;
        else cout<<"There is indeed no spoon!"<<endl;
	}

  

  return 0;
}

