#include <iostream>
using namespace std;

int main() {
    // Read the number of elements in the array
    int n;
    cin >> n;

    // Declare an array of size n to store the elements
    int a[n];

    // Read the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Initialize variables to keep track of consecutive identical elements
    int cnt = 1; // Counter for consecutive identical elements
    int res = 0; // Maximum length of consecutive identical elements

    // Iterate through the array to find consecutive identical elements
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] != a[i + 1]) {
           ++cnt;

        } else {
            res = max(res, cnt);
            cnt = 1;
        }
    }

    // Update the maximum length in case the last elements are consecutive
    res = max(res, cnt);

    // Output the maximum length of consecutive identical elements
    cout << res << endl;

    return 0;
}
