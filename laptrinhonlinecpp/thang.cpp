#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    if (n > 12 || n <= 0){
        cout << "Khong co" ;
        return 0;
    }
    switch (n) {
        case 1:
            cout << "Thang Mot";
            break;
        case 2:
            cout << "Thang Hai";
            break;
        case 3:
            cout << "Thang Ba";
            break;
        case 4:
            cout << "Thang Tu";
            break;
        case 5:
            cout << "Thang Nam";
            break;
        case 6:
            cout << "Thang Sau";
            break;
        case 7:
            cout << "Thang Bay";
            break;
        case 8:
            cout << "Thang Tam";
            break;
        case 9:
            cout << "Thang Chin";
            break;
        case 10:
            cout << "Thang Muoi";
            break;
        case 11:
            cout << "Thang Muoi mot";
            break;
        case 12:
            cout << "Thang Muoi hai";
            break;
    }
    return 0;
}