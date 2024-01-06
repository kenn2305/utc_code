#include <iostream>
using namespace std;
void solve(int x , int y){
    if (x%2==0){
        x+=1;
    }
    int sum = 0 ;
    for ( int i = 0 ; i < y ; i++){
        sum+=x;
        x+=2;
    }
    cout << sum << endl ;
}
int main(){
    int t ; cin >> t ;
    while (t--){
        int x , y ;
        cin >> x >> y ;
        solve(x,y);
    }
    return 0;
}