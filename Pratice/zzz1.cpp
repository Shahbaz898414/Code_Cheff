//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int minimumMagic(int n, int m, vector<int> &v1, vector<int> &v2)
    {

      priority_queue<int>  main;

      int ans=0;
        int sum1=0;
      for (int i = 0; i <n; i++)
      {
        /* code */
        sum1+=v2[i];
      }

      if(sum1>m)  return -1;
      

      

      for (int i = 0; i < n; i++)
      {
        main.push({v1[i]-v2[i]});
        ans+=v1[i];
      }

      int cnt=0;
      while(ans>m and main.size()>0){
        ans-=main.top();
        main.pop();
        cnt++;
      }

      if(cnt<=m){
        return cnt;
      }else return -1;
      


      

        
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