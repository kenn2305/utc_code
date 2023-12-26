#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    int Last_Num = a[a.size()-1];
    int first_Num = a[0];
    int congsai = (Last_Num-first_Num) / (n-1);
    int cnt = 0;
    for ( int i = 0 ; i < n ; i++){
        if (first_Num == a[i]){
            cnt++;
        }
        first_Num+=congsai;
    }
    if (cnt==n){
        cout << "Day la day cap so cong voi cong sai " << a[1]-a[0] << endl ;
    } else {
        cout << "Day khong la day cap so cong " << endl ;
    }
    return 0;
}