//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

#define ll long long


int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return 0;
        int sum=0 , rem,i,cnt=0;
        unordered_map<int,int>mp;

        vector<int> v2;

        vector<pair<int,int>>  pq;
        mp[0]=1;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
            rem=sum%k;
            if(rem<0){

              int x=rem;
              // pq.first=rem;
                rem=(rem+k);
                pq.push_back({x,rem});

            }
            if(mp.find(rem)!=mp.end()){

              v2.push_back(rem);
                cnt=cnt+mp[rem];

            }
            mp[rem]++;
        }

        for(auto it:mp)  {
          cout<<it.first<<" "<<it.second<<endl;
        }

        cout<<endl;

        for(auto it:v2)  cout<<it<<" ";
        cout<<endl;

        // for(auto it:pq){
        //   cout<<it.first<<" "<<it.second<<endl;
        // }



        return cnt;
        
 }


int main()
{
    int n,k;cin>>n>>k;

    vector<int>  arr(n);

    for (int i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }

  cout<<  subarraysDivByK(arr,k);
    
}
