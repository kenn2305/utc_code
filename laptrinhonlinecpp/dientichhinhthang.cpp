#include <iostream>
#include <iomanip> // Thêm thư viện này để sử dụng setprecision

using namespace std;

int main() {
    // Nhập giá trị của a và b
    double a, b;
    cin >> a;
    cin >> b;

    // Tính diện tích hình thang
    double area = 0.25 * (a + b) * (a - b);

    // Hiển thị diện tích với độ chính xác 2 chữ số sau dấu chấm thập phân
    cout << fixed << setprecision(2)  << abs(area) << endl;

    return 0;
}
