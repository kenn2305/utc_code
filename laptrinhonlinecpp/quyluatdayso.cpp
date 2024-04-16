#include <iostream>
#include <vector>
using namespace std;
using ll = long long ;
vector<int> save ;
void init(){
    int dif = 0 ;
    for (int i = 1 ; i <= 1000000 ; i+= dif){
        save.push_back(i);
        dif++;
    }
}
int main(){
    init();
    int t ; cin >> t ;
    ll sum = 0 ;
    while (t--){
        int n ; cin >> n ;
        for (auto it : save){
            if (it > n) break;
            sum+=it;
        }
        cout << sum << endl ;
        sum = 0 ;
    }
    return 0;
}