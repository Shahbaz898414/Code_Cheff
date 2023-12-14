#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int> &nums, int l, int r, int mask)
{
    // Return min index i (l <= i < r), such that (nums[i] & mask) != 0
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (mask & nums[mid])
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int maximumStrongPairXor(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int ans = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        int l = i, r = upper_bound(nums.begin(), nums.end(), nums[i] * 2) - nums.begin();

        for (int mask = 1 << 20; mask; mask >>= 1)
        {
            int nl = l, nr = r;
            ((mask & nums[i]) ? nr : nl) = bsearch(nums, l, r, mask);
            if (nl != nr)
                l = nl, r = nr;
        }

        ans = max(ans, nums[i] ^ nums[l]);
    }

    return ans;
}

int minOperations(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    int x = 0;
    int y = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums1[i] <= nums1[n - 1] && nums2[i] <= nums2[n - 1])
            continue;
        if (nums2[i] <= nums1[n - 1] && nums1[i] <= nums2[n - 1])
        {
            x++;
            continue;
        }

        return -1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (nums1[i] <= nums2[n - 1] && nums2[i] <= nums1[n - 1])
            continue;
        if (nums2[i] <= nums2[n - 1] && nums1[i] <= nums1[n - 1])
        {
            y++;
            continue;
        }
        return -1;
    }

    // cout<<x<<" "<<y<<endl;

    return min(x, y);
}

using Int64 = long long int;

int main()
{
    int num_tests, s;
    cin >> num_tests >> s;

    while (num_tests > 0)
    {
        int n,g=0;
        cin >> n;

        vector<int> elements(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> elements[i];
        }
        sort(elements.begin(), elements.end());

        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        for (int i = n - 1; i >= 0; --i)
        {
            // Option 0: Alice chooses the element
            dp[i][0] = elements[i] + max(dp[i + 1][0], dp[i + 1][1]);

            // Option 1: Alice skips her turn
            if (s == 1)
            {
                dp[i][1] = max(dp[i + 1][0], dp[i + 1][1]);
            }

            // Bob's turn
            dp[i][0] = min(dp[i][0], dp[i + 1][0]);

            // If S = 1, Alice can choose to skip her turn
            if (s == 1)
            {
                dp[i][1] = min(dp[i][1], dp[i + 1][1]);
            }
        }

        if (s == 0)
        {
            int total_sum;
            if (n % 2 == 1)
            {
                total_sum = accumulate(elements.begin(), elements.begin() + (n + 1) / 2, 0);
            }
            else
            {
                total_sum = accumulate(elements.begin() + 1, elements.begin() + n / 2 + 1, 0);
            }
            cout << total_sum << endl;
        }
        else
        {
            vector<int> prefix_sum(n + 1, 0);
            for (int i = 0; i < n; ++i)
            {
                prefix_sum[i + 1] = prefix_sum[i] + elements[i];

                dp[i][0] = elements[i] + max(dp[i + 1][0], dp[i + 1][1]);

                // Option 1: Alice skips her turn
                if (s == 1)
                {
                    dp[i][1] = max(dp[i + 1][0], dp[i + 1][1]);
                }

                // Bob's turn
                dp[i][0] = min(dp[i][0], dp[i + 1][0]);

                // If S = 1, Alice can choose to skip her turn
                if (s == 1)
                {
                    dp[i][1] = min(dp[i][1], dp[i + 1][1]);
                }
            }

            int answer = (n % 2 == 1) ? prefix_sum[n / 2 + 1] : prefix_sum[n / 2 + 1] - prefix_sum[1];

            for (int i = 1; i < n; ++i)
            {
                int middle = (i + n - 1) / 2;
                int current_sum;
                if ((n - i) % 2 == 1)
                {
                    current_sum = prefix_sum[middle + 1] - prefix_sum[i];
                }
                else
                {
                    current_sum = prefix_sum[middle + 1] - prefix_sum[i + 1];
                }
                answer = max(answer, current_sum);
            }

            cout << answer+dp[0][0]*g << endl;
        }

        num_tests -= 1;
    }

    return 0;
}


/*

Today was my 70th day out of the 100 days  hard challenge.
So today.I solved 5 question.


1. Max Nutrition (https://www.codechef.com/problems/NUTRITION).


2. 3 Logicians Walk into a Bar  (https://www.codechef.com/problems/LOGICIAN).


3. Cursed Indices (https://www.codechef.com/problems/CURSED)


4. Permutation Construction (https://www.codechef.com/problems/PERMUTATION_).


5. Food Costs (https://www.codechef.com/problems/FOODCOST?tab=statement).



#100dayschallenge #challenge #consistency #Cp #lessons #learning
#competitiveprogramming


*/
