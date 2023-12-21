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


    long long minimumCost(vector<int>& nums) {
       int n = nums.size();
    // std::sort(nums.begin(), nums.end());

    long long minTotalCost = LLONG_MAX;

        long long l=0,r=1000000000;

        while(l<=r){
            long long mid=(l+r)/2;


        }
    }
//////////////////////////////////////////////////////


 std::vector<int64_t> sum;

    void Presumcal(const std::vector<int>& v) {
        int n = v.size();
        sum.clear();
        sum.resize(n);
        sum[0] = v[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + v[i];
        }
    }

    int64_t SumRange(int i, int j) {
        return (i == 0) ? sum[j] : sum[j] - sum[i - 1];
    }

    int64_t getCost(const std::vector<int>& v, int64_t st, int64_t en, int64_t mid) {
        int64_t left = (v[mid] * static_cast<int64_t>(mid - st + 1)) - SumRange(st, mid);
        int64_t right = SumRange(mid, en) - (v[mid] * static_cast<int64_t>(en - mid + 1));
        return left + right;
    }

    int64_t Eqcost(const std::vector<int>& v, int64_t k) {
        int64_t n = v.size();
        int64_t cnt1 = 0, cnt2 = k - 1, cost = 1e18;
        for (; cnt2 < n; cnt2++, cnt1++) {
            if ((cnt2 - cnt1 + 1) % 2 == 1) {
                cost = std::min(cost, getCost(v, cnt1, cnt2, (cnt1 + cnt2) / 2));
            } else {
                cost = std::min({cost, getCost(v, cnt1, cnt2, (cnt1 + cnt2) / 2), getCost(v, cnt1, cnt2, (cnt1 + cnt2) / 2 + 1)});
            }
        }
        return cost;
    }

    int maxFrequencyScore(std::vector<int> v, int64_t k) {
        std::sort(v.begin(), v.end());
       
        int n = v.size();
        unordered_map<int, int> frequencyMap;
        int cnt1 = 1, cnt2 = n;
        Presumcal(v);

         for (int num : v) {
            frequencyMap[num]++;
        }

        int maxFrequency = 0;
        int maxFrequencyNum = 0;

         for (const auto& entry : frequencyMap) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
                maxFrequencyNum = entry.first;
            }
        }



        while (cnt1 < cnt2) {
            int mid = cnt1 + (cnt2 - cnt1 + 1) / 2;
            if (Eqcost(v, mid) <= k) {
                cnt1 = mid;
            } else {
                cnt2 = mid - 1;
            }
        }

         long long remainingOperations = k;
        for (const auto& entry : frequencyMap) {
            if (entry.first != maxFrequencyNum) {
                long long operationsNeeded=maxFrequencyNum;
                //  = max(0LL, entry.second - maxFrequency);
                remainingOperations -= operationsNeeded;
            }
        }

        int maxScore = maxFrequency + min(remainingOperations / n, 0LL);
        return cnt1;
    }











    ///////////////////////////////////////////




int maxFrequencyScore(vector<int>& nums, long long k) {
      unordered_map<int, int> frequencyMap;
        int n = nums.size();

        // Count the frequency of each element
        for (int num : nums) {
            frequencyMap[num]++;
        }

        int maxFrequency = 0;
        int maxFrequencyNum = 0;

        // Find the element with the maximum frequency
        for (const auto& entry : frequencyMap) {
            if (entry.second > maxFrequency) {
                maxFrequency = entry.second;
                maxFrequencyNum = entry.first;
            }
        }

        // Calculate the maximum possible score
        long long remainingOperations = k;
        for (const auto& entry : frequencyMap) {
            if (entry.first != maxFrequencyNum) {
                long long operationsNeeded = max(0LL, entry.second - maxFrequency);
                remainingOperations -= operationsNeeded;
            }
        }

        int maxScore = maxFrequency + min(remainingOperations / n, 0LL);
        return maxScore;
    }








    ///////////////////////////////////////////

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




