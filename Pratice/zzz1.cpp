//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int minimumMagic(int n, int m, vector<int> &v1, vector<int> &v2)
    {

      int l1= v1.size();
      int l2=v2.size();

      int sum1=0,sum2=0,sum3=0;

      for (int i = 0; i < l2; i++)
      {
        /* code */
        sum1+=v2[i];
      }

      for (int i = 0; i < l1; i++)
      {
        /* code */
        sum2+=v1[i];
      }



      if(sum1>m) return -1;

      if(sum2<=m) return 0;

      int  main=sum2-m;


      

        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>price(n),magical_price(n);
        for(int i=0;i<n;i++)
            cin>>price[i];
        for(int i=0;i<n;i++)
            cin>>magical_price[i];
        Solution ob;
        int ans=ob.minimumMagic(n,m,price,magical_price);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends


/*
ong long noOfPairs(vector<string> &box)
    {
        vector<int> v;
        for (auto &s : box) {
            int x = 0;
            for (int i = 0; i < s.size(); i++) {
                x ^= 1 << (s[i] - 'a');
            }
            v.push_back(x);
        }
        
        const size_t n = box.size();
        unordered_map<int, int> cnt;
        int64_t tot = 0;
        
        for (auto x : v) {
            tot += cnt[x];
            for (int i = 0; i < 26; i++) {
                int targ = 1 << i;
                tot += cnt[x ^ targ];
            }
            cnt[x]++;
        }
        
        return tot;
    }

*/