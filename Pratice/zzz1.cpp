#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int longestCommonSubsequence(string text1, string text2) {


        int text1Length = text1.size(), text2Length = text2.size();
    
       
        int dp[text1Length + 1][text2Length + 1];
      
        
        memset(dp, 0, sizeof dp);
      
        
        for (int i = 1; i <= text1Length; ++i) {
          for (int j = 1; j <= text2Length; ++j) {
                
            if (text1[i - 1]==text2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                
          }
        }
      
       
    return dp[text1Length][text2Length];
}



int main()
{
   int t;cin>>t;

   while(t--){
    
   }

    return 0;
}




