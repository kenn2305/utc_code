#include <iostream>
#include <map>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    map<int,int> one;
    map<int,int> two;
    int cnt =  0;
    for ( int i = 0 ; i < n ; ++i){
        int x ; cin >> x ;
        one[x]++;
    }
    for ( int i = 0 ; i < m ; ++i){
        int x ; cin >> x ;
        two[x]++;
    }
    for (auto it : one){
        cnt += min(it.second,two[it.first]);
    }
    cout << cnt << endl ;
    return 0;
}