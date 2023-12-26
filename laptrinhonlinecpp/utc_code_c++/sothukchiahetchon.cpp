#include <iostream>
using ll = long long ;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a , b ;
    cin >> a >> b ;
    int cnt = 0 ;
    int i = 0 ;
    int res = 0 ;
    while (cnt < b){
        if(i%a!=0){
            res = i;
            cnt++;
        }
        i++;
    }
    cout << res << endl ;
    return 0;
}