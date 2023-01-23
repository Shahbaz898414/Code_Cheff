#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int t;cin>>t;
  while(t--){
   int n;cin>>n;

    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin>>b[i];
    }

    int max=*max_element(a,a+n);
        int max2=*max_element(b,b+n);

        int max3=max*max2;

        cout<<max3<<endl;


  }
  return 0;
}