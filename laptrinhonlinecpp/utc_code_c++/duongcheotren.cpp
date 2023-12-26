#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char s;
    cin >> s;
    int a[12][12];
    for ( int i = 0 ; i < 12 ; i++){
        for ( int j = 0 ; j < 12 ; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;

    for ( int i = 0 ; i < 12 ; i++){
        for ( int j = 0 ; j < 12 ; j++){
            if(i+j < 11){
                sum+=a[i][j];
            }
        }
    }
    if (s == 'S') cout << fixed << setprecision(1) << (double)sum << endl ;
    else if (s == 'M')cout << fixed << setprecision(1) << (double)sum/66 << endl ;

    return 0;
}