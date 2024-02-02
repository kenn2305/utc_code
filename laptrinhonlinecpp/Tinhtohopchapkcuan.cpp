#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1000000007;

long long binomialCoefficient(int n, int k) {
    // Tạo một mảng để lưu trữ kết quả của dòng hiện tại
    vector<long long> dp(k + 1, 0);

    // Bắt đầu tính toán từ dòng đầu tiên
    dp[0] = 1;

    // Tính toán các giá trị và cập nhật mảng dp
    for (int i = 1; i <= n; ++i) {
        for (int j = min(i, k); j > 0; --j) {
            dp[j] = (dp[j - 1] + dp[j]) % MOD;
        }
        dp[0] = 1;  // Cập nhật giá trị cho trường hợp j = 0
    }

    // Kết quả là giá trị tại ô dp[k]
    return dp[k];
}

int main() {
    int t ; cin >> t ;
    while (t--){
        int n,k;
        cin >> n >> k;
        cout << binomialCoefficient(n,k) << endl ;
    }

    return 0;
}
