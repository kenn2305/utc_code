#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    int left_sum = 0 ;
    int right_sum = 0 ;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
        right_sum+=x;
    }
    int cnt = 0 ;
    for ( int i = 0 ; i < n ; i++){
        right_sum-=a[i];
        if (left_sum==right_sum){
            cout << i+1 << endl ;
            cnt++;
        }
        left_sum+=a[i];
    }
    cout << cnt << endl ;
    return 0;
}