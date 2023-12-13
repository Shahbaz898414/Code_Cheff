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
    int T = 1;
    cin >> T;
    while (T--)
    {
        Int64 size, value;
        cin >> size >> value;

        if (size & 1 and (size + 1) / 2 == value)
        {
            cout << "-1\n";
            continue;
            // return;
        }

        vector<Int64> P(size);

        vector<Int64> result(size);

        int num = 1;
        for (int i = 0; i < (size - 1) / 2; i++) {
            P[i] = num++;
        }
        iota(result.begin(), result.end(), 1);

        Int64 pivot = min(value, size - value + 1);
        reverse(result.begin(), result.begin() + pivot);

        P[(size - 1) / 2] = value;

        int cnt=0,g=0;

        // Construct the second half of the palindrome
        // for (int i = (size - 1) / 2 + 1; i < size - 1; i++) {
        //     P[i] = num++;
        // }

        reverse(result.begin() + size - pivot, result.end());


        int right = value + 1;
        for (int i = size / 2 + 1; i < size; i++) {
            P[i] = right++;
        }

        // Output the permutation
        // for (int i = 0; i < size; i++) {
        //     cout << P[i] << " ";
        // }


        if (result[0] != value)
        {

            // swap(P[0],P[size-1+1]);
             

              P.push_back(max(result[0],result[size-1])); 
            swap(result[0], result[size - 1]);

 swap(P[right-1],P[right]);
            // swap(P[value],P[value-1]);
          
          
           
        }

        for (int i = 0; i < size; i++)
        {
            cout << result[i]+max(P[i]*g,P[i]*right*g) << " ";
        }
        cout << endl;
    }

    return 0;
}

/*



Problem
You're given an array A = [A1, A2, ... , Aw] of length N, containing positive integers.

An index i is said to be cursed if A1 + A2 + ... + Ai-1 ≥ Ai.
In particular, Ai ≥ 1 means that index 1 is always not cursed.

You can rearrange A as you wish to. Find the minimum possible number of cursed indices in the rearranged array.
Also find any rearrangement that achieves this minimum.

Input Format
· The first line of input will contain a single integer T, denoting the number of test cases.
. Each test case consists of multiple lines of input.
o The first line of each test case contains a single integer N, the size of the array.
o The next line contains N space-separated integers, A1, A2, ... , AN.

Output Format
For each test case, output two lines.
. The first line should contain a single integer, the minimum number of cursed indices after rearranging array A as you like.
. The second line should contain N space-separated integers representing a rearrangement of A that attains this minimum number of cursed indices.

If there are multiple rearrangements that attain the minimum, you may print any of them.

Constraints

· 1 ≤ T ≤ 2 . 10^4
. 1< N < 10^5
· 1 ≤ Ai ≤ 109
. The sum of N over all test cases won't exceed 10^5

Testcase
Input
4
3
1 1 1
3
4 2 1
2
6 5
3
1 2 3

answer
2
1 1 1
0
1 2 4
0
5 6
1
1 2 3


*/