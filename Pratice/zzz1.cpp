//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

#define ll long long

// } Driver Code Ends
//User function Template for C++



void overlap(vector<pair<int, int> > v)
{
    // variable to store the maximum
    // count
    int ans = 0;
    int count = 0;
    vector<pair<int, char> > data;
 
    // storing the x and y
    // coordinates in data vector
    for (int i = 0; i < v.size(); i++) {
 
        // pushing the x coordinate
        data.push_back({ v[i].first, 'x' });
 
        // pushing the y coordinate
        data.push_back({ v[i].second, 'y' });
    }
 
    // sorting of ranges
    sort(data.begin(), data.end());
 
    // Traverse the data vector to
    // count number of overlaps
    for (int i = 0; i < data.size(); i++) {
 
        // if x occur it means a new range
        // is added so we increase count
        if (data[i].second == 'x')
            count++;
 
        // if y occur it means a range
        // is ended so we decrease count
        if (data[i].second == 'y')
            count--;
 
        // updating the value of ans
        // after every traversal
        ans = max(ans, count);
    }
 
    // printing the maximum value
    cout << ans << endl;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n;

      vector<int>  arr(n),brr(n);
       vector<pair<int, int> > v;
      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>arr[i];
      }

      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>brr[i];
      }

      for (int i = 0; i < n; i++)
      {
        /* code */
        v.push_back({arr[i],brr[i]});
      }

      overlap(v);
      
        
    }
}
