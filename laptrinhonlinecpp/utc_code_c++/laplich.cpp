#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool lambda(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
int main(){
    int n ; cin >> n ;
    vector<pair<int, int>> arr;
    for ( int i = 0 ; i < n ; i++){
        int x, y;
        cin >> y >> x;
        arr.emplace_back(x, y);
    }
    sort(arr.begin() , arr.end(), lambda);
    int cnt = 0 ;
    int tmp = 0 ;
    for (auto it : arr){
        int x = it.first ;
        int y = it.second ;
        if (y > tmp){
            cnt++;
            tmp = x ;
        }
    }
    cout << tmp << endl ;
    return 0;
}