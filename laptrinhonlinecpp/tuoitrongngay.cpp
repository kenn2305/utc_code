#include <iostream>
using namespace std;
int main(){
    int n ; cin >> n ;
    cout << n/365 << " nam " << endl << n%365/30 << " thang " << endl << n%365%30 << " ngay " << endl ;
    return 0;
}