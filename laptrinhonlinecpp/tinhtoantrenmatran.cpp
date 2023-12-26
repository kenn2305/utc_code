#include <iostream>
#include <iomanip>
#include <set>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    int a[100][100];
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int everodd_Num = 0 ;
    int cnt = 0 ;
    for ( int i = 0 ; i < n ; i++){
        int sum = 0 ;
        for ( int j = 0 ; j < m ; j++){
            sum+=a[i][j];
            if ((i+1) % 2 == 0 && (j+1) % 2 != 0){
                if (a[i][j] % 3 == 0){
                    everodd_Num+=a[i][j];
                    cnt++;
                }
            }
        }
        cout << sum << " " ;
    }
    cout << endl ;
    set<int> s;
    for ( int j = 0 ; j < m ; j++){
        for ( int i = 0 ; i < n ; i++){
            s.insert(a[i][j]);
        }
        cout << *s.rbegin() << " " ;
        s.clear();
    }
    cout << endl ;
    if (cnt == 0){
        cout << "khong co so thoa man" << endl ;
    } else {
        cout << fixed << setprecision(3) << (double)everodd_Num/cnt << endl ;
    }
    return 0;
}