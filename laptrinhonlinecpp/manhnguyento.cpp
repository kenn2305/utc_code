#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

vector<int> sieve(1000000 + 1);
typedef pair<int, int> pn;

void init() {
    for (int i = 1; i <= 1000000; ++i) {
        sieve[i] = i;
    }
    for (int i = 2; i * i <= 1000000; ++i) {
        if (sieve[i] == i) {
            for (int j = i * i; j <= 1000000; j += i) {
                sieve[j] = i;
            }
        }
    }
}

pn find_max(int n) {
    int cnt = 0;
    int m = n;
    while (n != 1) {
        int min_prime = sieve[n];
        while (n % min_prime == 0) {
            n /= min_prime;
        }
        ++cnt;
    }
    return {m, cnt};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    init(); // Khởi tạo sieve trước khi sử dụng

    pn first_pair;
    int max_count = INT_MIN;
    int result = 0;

    for (int i = n - 1; i >= 0; --i) {
        auto tmp = find_max(a[i]);
        if (tmp.second >= max_count) {
            result = tmp.first;
            max_count = tmp.second;
        }
    }

    cout << result;

    return 0;
}
