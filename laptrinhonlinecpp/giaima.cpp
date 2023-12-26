#include <iostream>
using namespace std;
int check(int a , int b){
    int sum = 0;
    while (a!=0){
        sum+=a%10;
        a/=10;
    }
    return sum == b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    for ( int i = 1 ; i < n ; i++){
        int x = n - i;
        if (check(x,i)){
            cout << x << endl ;
            return 0;
        }
    }
    return 0;
}