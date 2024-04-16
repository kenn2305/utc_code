#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int,int> mark;
void init(){
    for ( int i = 1 ; i <= 1000 ; ++i){
        mark[i]== 1;
    }
}
void solve(int n){
    for ( int i = 0 ; i < n ; ++i){
        for (auto it : mark){
            if (it.first % i == 0){
                if (it.second == 1){
                    it.second = 0;
                } else {
                    it.second = 1 ;
                }
            }
        }
    }
    int cnt = 0 ;
    for (auto it : mark){
        if (it.second == 1) cnt++;
        else if (it.second != 1) it.second == 1;
    }
    cout << cnt << endl ;
}
int main(){
    int t ; cin >> t ;
    while (t--){
        int n ; cin >> n ;
        solve(n);
    }
    return 0;
}