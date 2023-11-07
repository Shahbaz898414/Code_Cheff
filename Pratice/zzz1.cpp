#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void customFunction() {
    int numA, numB;
    cin >> numA >> numB;
    vector<int> arrA(numA);
    vector<int> arrB(numB);

    for (int i = 0; i < numA; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < numB; i++) {
        cin >> arrB[i];
    }

    sort(arrB.rbegin(), arrB.rend());
    int indexB = 0;

    for (int i = 0; i < numA; i++) {
        while (indexB < numB && arrB[indexB] >= arrA[i]) {
            cout << arrB[indexB] << " ";
            indexB++;
        }
        cout << arrA[i] << " ";
    }

    for (int j = indexB; j < numB; j++) {
        cout << arrB[j] << " ";
    }
    cout << endl;
}

int main() {
    int numTestCases;
    cin >> numTestCases;
    for (int i = 0; i < numTestCases; i++) {
        customFunction();
    }
    return 0;
}
