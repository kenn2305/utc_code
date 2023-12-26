#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b ;

    if (a > b || a == 0){
        swap(a,b);
    }
    if (b%a==0){
        cout << "So nhieu" << endl ;
    } else {
        cout << "Khong phai so nhieu" << endl ;
    }
    return 0;
}