#include <iostream>
#include <vector>
using namespace std;
void res(int x,int y){
    int sum = 0 ;
    if (x > y){
        swap(x,y);
    }
    for ( int i = x+1 ; i < y ; i++){
        if (i % 2 != 0){
            sum+=i;
        }
    }
    cout << sum << endl ;
}
int main(){
    int t ; cin >> t;
    while (t--){
        int x , y ;
        cin >> x >> y ;
        res(x,y);
    }
    return 0;
}