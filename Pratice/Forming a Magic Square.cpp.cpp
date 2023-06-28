#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int formingMagicSquare(vector<vector<int>>& s) {
    // reform the array to one dimension
    vector<int> s1 = {s[0][0], s[0][1], s[0][2], s[1][0], s[1][1], s[1][2], s[2][0], s[2][1], s[2][2]};
    // these are all forms of a 3x3 magic array
    vector<vector<int>> magic = {{8, 1, 6, 3, 5, 7, 4, 9, 2},
                                 {6, 1, 8, 7, 5, 3, 2, 9, 4},
                                 {4, 3, 8, 9, 5, 1, 2, 7, 6},
                                 {2, 7, 6, 9, 5, 1, 4, 3, 8},
                                 {2, 9, 4, 7, 5, 3, 6, 1, 8},
                                 {4, 9, 2, 3, 5, 7, 8, 1, 6},
                                 {6, 7, 2, 1, 5, 9, 8, 3, 4},
                                 {8, 3, 4, 1, 5, 9, 6, 7, 2}};
    int mini = INT_MAX;
    // brute force the difference
    for (auto arr : magic) {
        int diff = 0;
        for (int i = 0; i < s1.size(); i++) {
            diff += abs(s1[i] - arr[i]);
        }
        mini = min(diff, mini);
    }
    return mini;
}

int main() {
    vector<vector<int>> s(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }
    }
    int result = formingMagicSquare(s);
    cout << result << endl;
    return 0;
}
