#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

using Int64 = long long int;

void custom_function() {
    Int64 size, value;
    cin >> size >> value;
    
    if (size & 1 and (size + 1) / 2 == value) {
        cout << "-1\n";
        return;
    }
    
    vector<Int64> result(size);

    vector<int> P(size, 0);

        // Fill the middle of the permutation
        P[size/ 2] = value;

    iota(result.begin(), result.end(), 1);
    
    Int64 pivot = min(value, size - value + 1);

     int left = value - 1;
        for (int i = size / 2 - 1; i >= 0; i--) {
            P[i] = left--;
        }

    reverse(result.begin(), result.begin() + pivot);

    int right = value + 1;
        for (int i = size/ 2 + 1; i < size; i++) {
            P[i] = right++;
        }

         reverse(P.begin() + size - left, P.end());
    reverse(result.begin() + size - pivot, result.end());
   


    
    if (result[0] != value) {
        // swap(P[0],P[size-1+1]);
        swap(result[0], result[size - 1]);

        // swap(P[0],P[size-1+1]);
    }
    
    for(int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int num_tests = 1; 
    cin >> num_tests;
    
    for (int current_test = 1; current_test <= num_tests; current_test += 1) {
        custom_function();
    }
    
    return 0;
}


/*

vector<int> P(size, 0);

        // Fill the middle of the permutation
        P[size/ 2] = value;

        // Fill the left side of the permutation
        int left = value - 1;
        for (int i = size / 2 - 1; i >= 0; i--) {
            P[i] = left--;
        }

        // Fill the right side of the permutation
        int right = value + 1;
        for (int i = size/ 2 + 1; i < size; i++) {
            P[i] = right++;
        }

*/