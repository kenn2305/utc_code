#include <iostream>
#include <algorithm>
using namespace std;
struct oto{
    long long BSX ;
    float TT ;
    char Cty ;
    void nhap(){
        cin >> BSX >> TT >> Cty ;
    }
};
void chiahetcho3(int n , oto a[]){
    int cnt = 0 ;
    for ( int i = 0 ; i < n ; i++){
        if (a[i].Cty == 'B'){
            if (a[i].BSX % 3 == 0){
                cnt++;
            }
        }
    }
    cout << cnt << endl ;
}
bool cmp(const oto &a , const oto &b){
    return a.TT < b.TT ;
}
void ttnn(int n , oto a[]){
    sort(a , a+n , cmp);
    for ( int i = 0 ; i < 3 ; i++){
        cout << a[i].BSX << endl ;
    }
}
int main(){
    int n ; cin >> n ;
    oto a[n];
    for ( int i = 0 ; i < n ; i++){
        a[i].nhap();
    }
    chiahetcho3(n,a);
    ttnn(n,a);
    return 0;
}