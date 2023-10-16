#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n;

    string s;
    cin >> s;

    int ans = 1;

    if (n <= 3)
      k = stoi(s);
    else
      k = stoi(s.substr(n - 3));

    if (k % 8 == 0)
      cout << s << endl;

    else
    {

      int ans;


      if (n == 1) ans = 0;


      else if (n == 2) ans = stoi(s.substr(n - 2, 1));


      else ans = stoi(s.substr(n - 3, 2));


      // cout<<ans<<endl;


      
      if (ans % 4 == 0) s.back() = '8';


      else if (ans % 4 == 1) s.back() = '6';


      else if (ans % 4 == 2) s.back() = '4';


      else s.back() = '2';


      cout << s << endl;


    }
  }
  return 0;
}



/*



Dear Sir,

My name is Shahbaz, and I am a final-year BTech undergraduate from Mumbai, India. I am reaching out to you to inquire about potential internship opportunities within Qualcomm.


Please find my resume and GitHub for your review.
I would be grateful if you could refer me to the hiring manager or provide any relevant information about the opening.


Best regards,
Shahbaz Khan



*/


/*


Problem C - Iterate the array. At ith index, we first consider the (i - indexDifference)th index. At each position, we only need to keep track of maximum and minimum elements out of the all considered elements Because either of those two has to satisfy the valueDifference condition, otherwise no other can.

Problem D - Precompute two things. Prefix array of having product of all elements of first K rows (similarly suffix).
Prefix array for each row having product of first K elements of that row (similarly suffix). All these values can be used to calculate the required answer at each cell.


*/



/*


Today was my 12th day out of the 100 days  hard challenge.

So today, I solved 5 problems .

1. 2901. Longest Unequal Adjacent Groups Subsequence II (https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-ii/description/)

Initialization: 
Initialize a maxlen vector with all elements set to 1.
Iteration: 
Iterate over the words vector, considering each index 'i'. Nested Loop:  Run a nested loop from 0 to 'i - 1'. 
Conditions Check: 
Check if indices satisfy different groups, same size, and Hamming distance of 1 conditions.
Updating Maximum:
If conditions met, update maxlen at index 'i' if a larger subsequence is found. Maintain a prev array to track previous indices in the subsequence.
Backtracking:
Use prev array and the final index to backtrack and obtain the required subsequence.


2. Count of Sub-Multisets With Bounded Sum (https://leetcode.com/problems/count-of-sub-multisets-with-bounded-sum/description/)

In this Knapsack DP problem, dp[i] is the ways to sum up i. dp[0] = 1 for empty set, and we want to find sum(dp[l] + ... + dp[r]).  Iterate all items, assume we have c item of size a, iterate i from r to 1, update dp[i] += dp[i - a] + dp[i - a * 2] + ...+ dp[i - a * c].  Improve the process of calculation, with idea of sliding window by keep the sum of dp[i - a] + ... + dp[i - a * c]



3. 2905. Find Indices With Index and Value Difference II (https://leetcode.com/problems/find-indices-with-index-and-value-difference-ii/description/)

Iterate the array. At ith index, we first consider the (i+ indexDifference)th index. At each position, we only need to keep track of maximum and minimum elements with their indexes from the right side (suffix) of the array because either of those two has to satisfy the valueDifference condition, otherwise no other can.



4. 2906. Construct Product Matrix (https://leetcode.com/problems/construct-product-matrix/description/)

Open the 2D matrix to a 1D array. Compute prefix suffix products and reverse map the answers to the 2D matrix.



5. D. Effects of Anti Pimples (https://codeforces.com/contest/1877/problem/D)


Objective:
 Calculate ways to choose black indices for a given score 'w'.
Approach:  
Split array 'a' into two groups based on values greater and not greater than 'w'. Avoid making any high-value element black or green, ensuring no black index is a factor of group 1 indices.

Calculating g(w): 

Find the count 'c' of indices that are factors of at least one group 1 index. Use the formula  g(w) = 2^n−c−1, g(w)=2  n−c−1 to determine ways to choose black indices with at most score 'w'.

Calculating f(w):  
Utilize the formula  f(w) = g(w)−g(w−1 ) f(w)=g(w)−g(w−1) to find ways to choose black indices for exact score 'w'.

Final Answer:  Calculate the sum of  f (w) ×w f(w)× w for all non-zero f(w) values, where 'w' corresponds to elements of array 'a'.



*/