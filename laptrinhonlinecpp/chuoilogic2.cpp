#include <iostream>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    for ( int i = 1 ; i <= m ; i++){
        cout << i << " ";
        if (i % n == 0){
            cout << endl ;
        }
    }
    return 0;
}