#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef pair<int, int> Pair;
typedef vector<Pair> VectorPair;
typedef vector<int> VectorInt;
typedef vector<VectorInt> VectorVectorInt;

const long long MOD = 1e9 + 7;

template <typename T>
struct SegmentTree {
    T unit;
    T (*func)(T obj1, T obj2);
    vector<T> s;
    int n;
    SegmentTree(int n, T (*f)(T obj1, T obj2), T def) : s(2 * n, def), n(n), func(f), unit(def) {}
    void update(int pos, T val) {
        for (s[pos += n] = val; pos /= 2;)
            s[pos] = func(s[pos * 2], s[pos * 2 + 1]);
    }
    T query(int b, int e) {
        e++;
        T ra = unit, rb = unit;
        for (b += n, e += n; b < e; b /= 2, e /= 2) {
            if (b % 2)
                ra = func(ra, s[b++]);
            if (e % 2)
                rb = func(s[--e], rb);
        }
        return func(ra, rb);
    }
};

int join(int a, int b) { return max(a, b); }
int sum(int a, int b) { return (a + b); }

void solve() {
    int numElements;
    cin >> numElements;
    vector<int> vectorA(numElements);
    int limit;
    cin >> limit;
    VectorInt vectorB(numElements);
    for (int i = 0; i < numElements; i++) {
        cin >> vectorA.at(i);
    }
    for (int i = 0; i < numElements; i++) {
        cin >> vectorB[i];
    }
    swap(vectorA, vectorB);
    int sumH = 0;
    SegmentTree<int> segmentTree(numElements, join, 0);
    SegmentTree<int> sumSegmentTree(numElements, sum, 0);

    for (int i = 0; i < numElements; i++) {
        sumH += vectorA[i];
        segmentTree.update(i, sumH - vectorB[i]);
        sumSegmentTree.update(i, vectorA[i]);
    }

    for (int i = 0; i < numElements; i++) {
        int goneTill = upper_bound(vectorB.begin(), vectorB.end(), vectorB[i] + 2 * limit) - vectorB.begin() - 1;
        int worst = 0;
        if (i)
            worst = max(worst, segmentTree.query(0, i - 1));
        if (goneTill != numElements - 1)
            worst = max(worst, segmentTree.query(goneTill + 1, numElements - 1) - sumSegmentTree.query(i, goneTill));
        if (worst == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int totalTests = 1;
    cin >> totalTests;
    for (int testNo = 1; testNo <= totalTests; testNo++) {
        solve();
    }
    return 0;
}
