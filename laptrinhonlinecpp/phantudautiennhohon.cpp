#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Input vector a
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    // Input vector b
    vector<int> b;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    // Sort vector a
    sort(a.begin(), a.end());

    // Find and print lower bound for each element in vector b
    for (int i = 0; i < m; i++) {
        auto it = lower_bound(a.begin(), a.end(), b[i]);
        cout << it - a.begin() << endl;
    }

    return 0;
}
