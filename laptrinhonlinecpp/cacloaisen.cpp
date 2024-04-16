#include <iostream>
#include <set>
using namespace std;
int main(){
    int n ;
    while (cin >> n){
        set<int> res;
        for ( int i = 0 ; i < n ; i++){
            int x ; cin >> x ;
            res.insert(x);
        }
        if (*res.rbegin() < 10){
            cout << "1" << endl ;
        } else if (*res.rbegin() >= 10 && *res.rbegin() < 20){
            cout << "2" << endl ;
        } else if (*res.rbegin() >= 20){
            cout << "3" << endl ;
        }
        res.clear();
    }

    return 0;
}