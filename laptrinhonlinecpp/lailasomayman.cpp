#include <iostream>
using namespace std;
using ll = long long;

int check_num(ll n) {
    int cnt_4 = 0;
    int cnt_7 = 0;
    int cnt = 0;
    while (n != 0) {
        cnt++;
        if (n % 10 == 4) {
            cnt_4++;
        } else if (n % 10 == 7) {
            cnt_7++;
        };
        n /= 10;
    }
    return cnt_4 != 0 && cnt_7 != 0 && cnt_4 == cnt_7 && cnt == (cnt_4 + cnt_7);
}

void solve(int n){
    ll i = 10;
    ll step = 90; // Số lượng số cần kiểm tra trong mỗi lần lặp
    ll current = 10; // Số bắt đầu từ 10
    while (true){
        for (ll tmp = current; tmp < current + step; tmp++){
            if (tmp >= n && check_num(tmp)){
                cout << tmp << endl;
                return;
            }
        }
        current *= 10; // Tăng giá trị bắt đầu của vòng lặp
        step *= 10; // Tăng số lượng số cần kiểm tra
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    solve(n);

    return 0;
}
