#include <bits/stdc++.h>
using namespace std;
using namespace std;

const int MOD = 1e9 + 7;

#define ll long long

int main()
{
    int n;
    cin >> n;

    for (int iteration = 0; iteration < n; ++iteration)
    {
        string inputString;
        cin >> inputString;
        ll stringLength = inputString.length();

        std::vector<long long> dp(n + 1, 0);

        dp[0] = 1;
        dp[1] = (inputString[0] == 'a') ? 1 : 0;

        inputString = "#" + string(inputString.rbegin(), inputString.rend());

        vector<ll> prefixSum(stringLength + 1, 0);

          ll cnt=0;
         ll iterate = 0,dr=0;


        ll sop,g=0,h=0;
        vector<ll> powerOfTwo(stringLength + 1, 0);
        prefixSum[0] = 1;
        ll nonACount = 0;

      
        for (ll i = 2; i <= n; ++i)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;

            if (inputString[i - 1] == 'b' && inputString[i - 2] == 'a')
            {
                dp[i] = (dp[i] + dp[i - 2]) % MOD;
            }
        }

        ll accumulatedNonACount = 1;
        powerOfTwo[0] = 1;

        // for (ll i = 1; i <= n; ++i)
        // {
        //     dp[i] = (2 * dp[i - 1]) % MOD;

        //     for (ll j = i - 2; j >= 0; j-=2)
        //     {
        //         if (inputString[i - 1] == 'b' && inputString[j] == 'a')
        //         {
        //             dp[i] = (dp[i] - dp[j] + MOD) % MOD;
        //             break;
        //         }
        //     }
        // }

        for (ll i = 1; i <= stringLength; ++i)
        {
            powerOfTwo[i] = (powerOfTwo[i - 1] * 2) % MOD;
            if (inputString[i] != 'a')
            {
                nonACount += accumulatedNonACount;
                nonACount %= MOD;
            }
            else
            {
                prefixSum[i] = nonACount;
            }
            accumulatedNonACount += prefixSum[i];
            accumulatedNonACount %= MOD;
        }

        ll aCount = 0;
        ll result = 0;
        ll num_subsequences = 0;

        inputString += "#";
        for (ll i = 1; i <= n; i++)
        {
            if (dp[i])
            {
                num_subsequences += dp[i];
            }
        }

        for (ll i = stringLength + 1; i > 0; --i)
        {
            if (inputString[i] == 'a')
            {
                aCount += 1;
            }
            result += (powerOfTwo[aCount] * prefixSum[i - 1]) % MOD;
            result = result % MOD;
        }
        ll ans;

        // for (ll i = 2; i <= n; ++i)
        // {
        //     dp[i] = dp[i - 1];

        //     if (inputString[i - 2] == 'a' && inputString[i - 1] == 'b')
        //     {
        //         dp[i] = (dp[i] + dp[i - 2]) % MOD;
        //     }
        //     else if (inputString[i - 2] == 'a' && inputString[i - 1] == 'a')
        //     {
        //         dp[i] = (dp[i] + dp[i - 2]) % MOD;
        //     }
        //     else if (inputString[i - 2] == 'b' && inputString[i - 1] == 'a')
        //     {
        //         dp[i] = (dp[i] + dp[i - 2]) % MOD;
        //     }
        // }

       
        ans=(dp[inputString.size()]-1+MOD)%MOD;

        result = (result - 1 + MOD) % MOD;

        ans*=cnt;



        cout << result+ans << endl;
    }

    return 0;
}
