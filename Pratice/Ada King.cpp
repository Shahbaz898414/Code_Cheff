#include<bits/stdc++.h>

#define ll long long 
using namespace std;
 
int main() {
    int t;
    cin>>t;
   
    while(t--) {
      int r, c, s;
      cin >> r >> c >> s;
      r--; c--;
      int count = 0;
      for(int i = 0; i < 8; i++) {
          for(int j = 0; j < 8; j++) {
              if(max(abs(i - r), abs(j - c)) <= s) count++;
          }
      }
      cout << count << endl;
        
      
    }
}