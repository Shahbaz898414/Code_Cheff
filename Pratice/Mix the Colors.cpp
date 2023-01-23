#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;cin>>t;
  while(t--) {
    int n;cin>>n;
    set<int > m;
    for(int i =0;i<n;i++) {
      int c;cin>>c;
      m.insert(c);

    }

        cout<<n<<endl;
    cout<<m.size()<<endl;



    cout<<n-m.size()<<"   vbcnm  "<<endl;
  }
}
