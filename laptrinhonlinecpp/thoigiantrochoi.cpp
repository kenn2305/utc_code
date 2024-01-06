#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b ;
    if (a > b){
        cout << "Tran dau keo dai " << 24-(a-b) << " gio" << endl ;
    } else if (a < b){
        cout << "Tran dau keo dai " << b-a << " gio" << endl;
    } else if (a==b){
        cout << "Tran dau keo dai 24 gio " << endl ;
    }
    return 0;
}