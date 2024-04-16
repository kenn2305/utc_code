#include <iostream>
#include <cmath>
using namespace std;
void solve(int n){
    string s1;
    char a ;
    for ( int i = 0 ; i < n ; ++i){
        cin >> a;
        s1 += a;
    }
    int cnt = 0 ;
    for ( int i = 0 ; i < n ; ++i){
        cin >> a;
        int index1 = a - '0';
        int index2 = s1[i] - '0';
        if (index1 < index2){
            swap(index1,index2);
        }
        cnt += min(index1-index2,(10+index2) - index1);
    }
    cout << cnt << endl ;
}
int main(){
    int n ; cin >> n ;
    while (n--){
        int x ; cin >> x ;
        solve(x);
    }
    return 0;
}