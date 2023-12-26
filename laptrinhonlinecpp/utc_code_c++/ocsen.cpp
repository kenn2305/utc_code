#include <iostream>
using namespace std;
int main(){
    int a , b ,c ;
    cin >> a >> b >> c ;
    int x = 0 ;
    int ngay = 1 ;
    while(true){
        x+=a;
        if (x >= c){
            break;
        }
        x-=b;
        ngay++;
    }
    cout << ngay << endl ;
    return 0;
}