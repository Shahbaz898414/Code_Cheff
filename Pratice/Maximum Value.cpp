#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
    int T = 1;cin>>T;
    while (T--)
    {
        ll n;cin>>n;
      vector<ll> arr(n);

      for (ll i = 0; i < n; i++)
      {
        /* code */
        cin>>arr[i];
      }

      sort(arr.begin(),arr.end());

      ll sum=arr[0]*arr[1]+max(arr[0]-arr[1],arr[1]-arr[0]);
      ll sum2=arr[n-1]*arr[n-2]+max(arr[n-1]-arr[n-2],arr[n-2]-arr[n-1]);


      cout<<max(sum,sum2)<<endl;
      

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



/*


Today was my 43th day out of the 100 days  hard challenge.
So today, I solved 5 problems .


1. 2935. Maximum Strong Pair XOR Il (https://leetcode.com/problems/maximum-strong-pair-xor-ii/description/).


2. 2932. Maximum Strong Pair XOR | (https://leetcode.com/contest/weekly-contest-371/problems/maximum-strong-pair-xor-i/).


3. 2933. High-Access Employees (https://leetcode.com/contest/weekly-contest-371/problems/high-access-employees/)


4. 2934. Minimum Operations to Maximize Last Elements in Arrays (https://leetcode.com/contest/weekly-contest-371/problems/minimum-operations-to-maximize-last-elements-in-arrays/).


5. Slow Start (https://www.codechef.com/problems/SLOWSTART).




#100dayschallenge #challenge #consistency #SegmentTree #lessons
#learning



*/