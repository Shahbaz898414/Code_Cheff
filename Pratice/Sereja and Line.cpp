#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int min( int a, int b){
    if(a<b)
    return a;
    else
    return b;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],s=0;
        vector<int>v;
        for( int i=0; i<n; i++){
            cin>>a[i];
             if(a[i]==0)
             v.insert(v.begin(),(i+1));
             else{
             auto it=find(v.begin(),v.end(),a[i]);
             int index=it-v.begin();
              s+=min((index+1),i-index-1);
             v.insert((v.begin()+index+1),(i+1));
          }
        }
        cout<<s<<endl;
    }
	// your code goes here
	return 0;
}