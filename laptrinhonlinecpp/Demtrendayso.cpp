#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Create a vector to store the array elements
    vector<int> a(n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Count pairs where the second element is divisible by the first one
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] % a[i] == 0) {
            cnt++;
        }
    }

    // Output the count
    cout << cnt << endl;

    return 0;
}
