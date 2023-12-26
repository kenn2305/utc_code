#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    int odd = 0 ;
    int chan = 0 ;
    for ( int i = 0 ; i < n ; i++){
        if (a[i] % 2 == 0){
            chan++;
        } else {
            odd++;
        }
    }
    if (odd < chan){
        cout << odd << endl ;
    } else {
        cout << chan << endl ;
    }
    return 0;
}