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
    int n;cin>>n;
   }

    return 0;
}




/*

#include<cstdio>
int main()
{
	int t;
	long long n;
	int base; 
	scanf("%d",&t);
	while(t--)
    {
        scanf("%lld",&n);
        if(n==1||n==3)
        {
            printf("2\n");
            continue;
        }
        if(n==2||n==4)
        {
            printf("3\n");
            continue;
        }
        base = 2;
        bool flag = 0;
        long long tt ;
        while(1LL*base*base<=n)
        {
            tt = n;
            if(!(tt%base))
            {
            	++base;
            	continue;
			}
            long long left = tt/base;
            long long right = tt - base*left;
            long long q;
            if(right==0)
            {
            	++base;
            	continue;
			}
            for(q=left/base;q>right;q=left/base)
            {
            	right = base *(right-q) + left;
            	left = q;
			}
			if(left==right||q==right)
			{
				flag = 1;
				printf("%d\n",base);
				break;
			}
            ++base;
        }
        if(!flag)
        {
            base--;
            long long p;
            while((p=n/base)==base+1||base*p!=n)
                base--;
            printf("%lld\n",p-1);
        }
    }
	return 0;
}


*/