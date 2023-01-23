#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int arraySortedOrNot(ll a[], ll n)
{
   
    if (n == 1 || n == 0)
        return 1;
 
    
    if (a[n - 1] < a[n - 2])
        return 0;
 
    return arraySortedOrNot(a, n - 1);
}

int main() {

  ll t;cin>>t;

  while(t-->0){
   ll n,c=0;cin>>n;

   ll a[n];

   for (int i=0; i<n;i++) {
     cin>>a[i];
   }

   for (int i = 0; i < n; i++)
   {
     if(a[i]>a[i+1]){
       swap(a[i],a[i+1]);
       break;
     }
   }

   if(arraySortedOrNot(a, n)){
     cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
   
   
  }

  return 0;
}

