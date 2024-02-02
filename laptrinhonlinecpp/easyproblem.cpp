#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int> square_num;
void save(){
    square_num.resize(31622+1);
    int i = 1 ;
    int dif = 3;
    int cnt = 0 ;
    while (i <= 1000000000){
        square_num.push_back(i);
        i+=dif;
        dif+=2;
    }
}
void res(int n){
    for ( int i = square_num.size()-1 ; i >= 0 ; i--){
        if (n % square_num[i] == 0){
            cout << sqrt(square_num[i]) << " " << n/square_num[i] << endl ;
            break;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t ; cin >> t ;
    save();
    while (t--){
        int n ; cin >> n ;
        res(n);
    }
    return 0;
}