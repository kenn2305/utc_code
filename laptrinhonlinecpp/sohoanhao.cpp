#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t ; cin >> t ;
    while (t--){
        long long x ; cin >> x ;
        if (x == 6 || x == 28 || x == 120 || x == 496 || x == 8128 || x == 33550336 || x == 8589869056 || x == 137438691328){
            cout << x << " eh perfeito" << endl ;
        } else {
            cout << x << " nao eh perfeito" << endl ;
        }

    }
    return 0;
}