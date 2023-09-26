#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        if(n==3){
          cout<<"2 3 4";
        }else if(n==4){
          cout<<"2 3 4 5";
        }else if(n==5) {
          cout<<"2 3 4 5 7";
        }else {
          cout<<"2 3 4 5 7 ";

          int cnt=7;
          for(int i=6;i<=n;i++){
            cnt+=2;
            cout<<cnt<<" ";
          }
        }

        cout<<endl;
       
    }

    return 0;
}
