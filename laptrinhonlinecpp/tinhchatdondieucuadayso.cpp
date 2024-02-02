#include <iostream>
#include <vector>
using namespace std;
int increase_only(vector<int> a){
    int cnt = 0 ;
    for (int i = 0 ; i < a.size()-1 ; i++){
        if (a[i] < a[i+1]) cnt++;
    }
    return cnt == a.size()-1;
}
int increase(vector<int> a){
    int cnt = 0 ;
    for (int i = 0 ; i < a.size()-1 ; i++){
        if (a[i] <= a[i+1]) cnt++ ;
    }
    return cnt == a.size()-1;
}
int decrease_only(vector<int> a){
    int cnt = 0 ;
    for (int i = 0 ; i < a.size()-1 ; i++){
        if (a[i] > a[i+1]) cnt++;
    }
    return cnt == a.size()-1 ;
}
int decrease(vector<int> a){
    int cnt = 0 ;
    for (int i = 0 ; i < a.size()-1 ; i++){
        if (a[i] >= a[i+1]) cnt++ ;
    }
    return cnt == a.size()-1 ;
}
int equal(vector<int> a){
    int cnt = 0 ;
    for ( int i = 0 ; i < a.size()-1 ; i++){
        if (a[i]==a[i+1]){
            cnt++;
        }
    }
    return cnt == a.size()-1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    if (equal(a)){
        cout << "Day bang nhau" ;
    } else if (increase_only(a)){
        cout << "Day don dieu tang ngat" ;
    } else if (decrease_only(a)){
        cout << "Day don dieu giam ngat" ;
    } else if (decrease(a)){
        cout << "Day don dieu giam" ;
    } else if (increase(a)){
        cout << "Day don dieu tang" ;
    } else {
        cout << "Day khong don dieu" ;
    }
    return 0;
}