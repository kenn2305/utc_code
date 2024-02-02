#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }

    while (m--) {
        int x, y;
        cin >> x >> y;
        long long sum = prefixSum[y] - prefixSum[x - 1];
        cout << sum << endl;
    }

    return 0;
}
