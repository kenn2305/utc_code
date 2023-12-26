#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n , m ;
    cin >> n >> m ;
    vector<int> a;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    int cnt = 0 ;
    for ( int i = 0 ; i < a.size(); i++){
        for ( int j = 0 ; j < a.size() ; j++){
            if (abs(a[i] - a[j]) == m){
                cnt++;
            }
        }
    }
    cout << cnt/2 << endl ;
    return 0;
}
