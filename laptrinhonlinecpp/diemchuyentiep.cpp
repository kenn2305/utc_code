#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        a.push_back(x);
    }
    for (int i = 0 ; i < n ; i++){
        if (a[i]==1){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" <<  endl ;
    return 0;
}