#include<bits/stdc++.h>
#include <iostream>
#include<string.h>
#include <cstring>
#define ll long long int
using namespace std;
 
int main() {
    int t,i,j,k;
    cin>>t;
    string s1="abcdefghijklmnopqrstuvwxyz";
    string s2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s4;
    cin>>s4;
    while(t--) {
        string s,s3="";
        cin>>s;
        int m=s.size();
        for(k=0;k<m;k++)
        {
            for(j=0;j<26;j++)
            {
                if(s2[j]==s[k] && s[k]>=65 && s[k]<=90)
                {
                    cout<<char(toupper(s4[j]));
                    break;
                }
                else if(s[k]==s1[j])
                {
                    cout<<s4[j];
                    break;
                }
                else if(s[k]=='_')
                {
                    cout<<char(32);
                    break;
                }
                else if(int(s[k])>=33 && int(s[k])<=64)
                {
                    cout<<s[k];
                    break;
                }
            }
        }
        cout<<endl;
    }
}