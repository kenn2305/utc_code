#include <iostream>
using namespace std;
void nhap(int n , int m , int a[100][100]){
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
}
void cong(int n , int m ,int a[100][100] , int b[100][100]){
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = 0 ; j < m ; j++){
            cout << a[i][j]+b[i][j] << " " ;
        }
        cout << endl ;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[100][100];
    int b[100][100];
    int n , m ;
    cin >> n >> m ;
    nhap(n,m,a);
    nhap(n,m,b);
    cong(n,m,a,b);

    return 0;
}