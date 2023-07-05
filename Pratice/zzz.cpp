//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{   
   public:
    int maxGoodLength(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int sidel = 0;
        int sider = min(r, c);
        int mi = 0;

        while (sidel <= sider) {
            int mid = sidel + (sider - sidel) / 2;
            
            if (isGoodLength(matrix, mid)) {
                mi = mid;
                sidel = mid + 1;
            } else {
                sider = mid - 1;
            }
        }
        
        return mi;
    }

private:
    bool isGoodLength(const vector<vector<int>>& matrix, int length) {
        int r = matrix.size();
        int c = matrix[0].size();

        for (int i = 0; i <= r - length; i++) {
            for (int j = 0; j <= c - length; j++) {
                bool fl = true;
                
                for (int k = i; k < i + length; k++) {
                    for (int l = j; l < j + length; l++) {
                        if (matrix[k][l] < length) {
                            fl = false;
                            break;
                        }
                    }
                    if (!fl) {
                        break;
                    }
                }
                
                if (fl) {
                    return true;
                }
            }
        }
        
        return false;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,i,j;
        cin>>n>>m;
        vector<vector<int>>a(n,vector<int>(m));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        int ans=ob.maxGoodLength(a);
        cout<<ans<<endl;
    }
}

// } Driver Code Ends


/*





*/