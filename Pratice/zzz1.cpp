#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;

    for (int iteration = 0; iteration < n; ++iteration)
    {
        string inputString;
        cin >> inputString;
        int stringLength = inputString.length();

        inputString = "#" + string(inputString.rbegin(), inputString.rend());

        vector<int> prefixSum(stringLength + 1, 0);
        vector<int> powerOfTwo(stringLength + 1, 0);
        prefixSum[0] = 1;
        int nonACount = 0;
        int accumulatedNonACount = 1;
        powerOfTwo[0] = 1;

        for (int i = 1; i <= stringLength; ++i)
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

        int aCount = 0;
        int result = 0;
        inputString += "#";

        for (int i = stringLength + 1; i > 0; --i)
        {
            if (inputString[i] == 'a')
            {
                aCount += 1;
            }
            result += (powerOfTwo[aCount] * prefixSum[i - 1]) % MOD;
            result = result % MOD;
        }

        result = (result - 1 + MOD) % MOD;
        cout << result << endl;
    }

    return 0;
}
