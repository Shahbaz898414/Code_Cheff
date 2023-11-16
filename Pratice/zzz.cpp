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

int main()
{
    int T = 1;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> arr(n), brr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            /* code */
        }

        cout << maximumStrongPairXor(arr);
    }

    return 0;
}

/*

Hi,

I hope this message finds you well! I came across the Software Development Engineer I - Frontend Technologies (https://bookmyshow.hire.trakstar.com/jobs/fk03w8x/) at BookMyShow. As an aspiring Software Engineer, I admire the company's innovative work. If possible, could you kindly refer me? I'd greatly appreciate it!

Best regards,
Shahbaz Khan




*/

/*


class Solution {
public:
    int bsearch(vector<int>& nums, int l, int r, int mask) {
        // Return min index i (l <= i < r), such that (nums[i] & mask) != 0
        while (l < r) {
            int mid = (l+r) / 2;
            if (mask & nums[mid]) r = mid;
            else l = mid+1;
        }
        return l;
    }

    int maximumStrongPairXor(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int l = i, r = upper_bound(nums.begin(), nums.end(), nums[i]*2) - nums.begin();

            for (int mask = 1 << 20; mask; mask >>= 1) {
                int nl = l, nr = r;
                ((mask & nums[i]) ? nr : nl) = bsearch(nums, l, r, mask);
                if (nl != nr) l = nl, r = nr;
            }

            ans = max(ans, nums[i] ^ nums[l]);
        }

        return ans;
    }
};



*/