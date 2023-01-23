#include<bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int>a;
        set<int>b;
        int tr;
        cin>>tr;
      
        // int arrTr[tr];
        for(int i=0;i<tr;i++)
        {
            // cin>>arrTr[i];
            int x;cin>>x;
            a.insert(x);
        }
        int dr;
        cin>>dr;
        // int arrDr[dr];
        for(int j=0;j<dr;j++)
        {
            int y;cin>>y;
            b.insert(y);
        }
        int ts;
        cin>>ts;
        int arrTs[ts];
        for(int k=0;k<ts;k++)
        {
            cin>>arrTs[k];
            // a.insert(arrTs[k]);
        }
        int ds;
        cin>>ds;
        int arrDs[ds];
        for(int l=0;l<ds;l++)
        {
            cin>>arrDs[l];
        }

        int ma=max(ds,ts);
          int g=0,f=0;
        for (int i = 0; i <ts; i++)
        {
         if(a.count(arrTs[i])) {
           g++;
         
           
         } 
        
        }

        for (int i = 0; i <ds; i++)
        {
          if(b.count(arrDs[i])){
           f++;
         }
        }
        
        if(g==ts and f==ds){
          cout<<"yes"<<endl;
        }else{
          cout<<"no"<<endl;
        }
        
    }
}