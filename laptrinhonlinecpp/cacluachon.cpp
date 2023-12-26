#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp(pair<int,double> a , pair<int,double> b){
    return a.second < b.second ;
}
int main(){
    int n ; cin >> n ;
    vector<pair<int,double>> a(n);
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i].first >> a[i].second ;
    }
    sort(a.begin() , a.end() , cmp);
    if (a[n-1].second < 8){
        cout << "Diem toi thieu khong dat" << endl ;
        return 0;
    }
    cout << a[n-1].first << endl ;
    return 0;
}