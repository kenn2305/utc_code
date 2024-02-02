#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int check(int n , int m , vector<int> a){
    for (int i = 0 ; i < m-1 ; i++){
        int tmp = abs(a[i+1]-a[i]);
        if (tmp > n) return 0;
    }
    return 1 ;
}
int main(){
    int n , m ;
    cin >> n >> m ;
    vector<int> a;
    a.reserve(m);
    for ( int i = 0 ; i < m ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    if (!check(n,m,a)) cout << "GAME OVER" << endl ;
    else cout << "YOU WIN" << endl ;
    return 0;
}