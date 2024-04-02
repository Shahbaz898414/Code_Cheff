#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1000000007;
const int MOD = 1000000007;




int main()
{

  ll t;cin>>t;

  while(t--){
     unordered_map<string,string> child;
        unordered_set<string> st;
        unordered_map<string,string> cost;
        int n; cin>>n;
        string par;
        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            string a,b,c;
            cin>>a>>b>>c;
            child[a] = b;

            st.insert(b);

            cost[a] = c;

            // cout<<c<<" ";

            int x = 0,j=0;
            while( j<c.size() - 1 )
            {
                x = x*10 + (int)(c[j]-'0');
                // cout<<x<<" ";
                j++;
            }
            ans+=x;
        }
        


        for(auto x: child)
        {
            if(st.find(x.first)==st.end())
            {
                par = x.first;
            }
        }


        
        while(child.find(par)!=child.end())
        {
            cout<<par<<" "<<child[par]<<" "<<cost[par]<<"\n";
            par = child[par];
        }

        cout<<endl;
        
        cout<<ans<<"0"<<"\n";
    
    
    
  }

 
  return 0;
}

