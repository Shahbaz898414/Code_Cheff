#include <bits/stdc++.h>
using namespace std;
#define ll long long




int main() {
    int t;
    cin >> t;

    while (t--) {


        int n=10;

        char  arr[n][n];



        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) { cin>>arr[i][j];
            } 
        }

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
               cout<<arr[i][j];
            } 
            cout<<endl;
        }


        
         
    }

    return 0;
}



