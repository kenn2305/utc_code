#include <iostream>
#include <algorithm>
#include <vector>
int cmp1(int a , int b){
    if (a % 3 == 0 && b % 3 == 0){
        if (a < b){
            return 1;
        }
    }
    return 0;
}
int cmp2 (int a , int b){
    if (a % 3 == 1 && b % 3 == 1){
        if (a < b){
            return 1 ;
        }
    }
    return 0;
}
int cmp3 (int a , int b){
    if (a % 3 == 2 && b % 3 == 2){
        if (a < b){
            return 1 ;
        }
    }
    return 0;
}
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    a.reserve(n);
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
    }
    vector<int> du0 ;
    vector<int> du1 ;
    vector<int> du2 ;
    for (auto it : a){
        if (it % 3 == 0){
            du0.push_back(it);
        } else if (it % 3 == 1){
            du1.push_back(it);
        } else if (it % 3 == 2){
            du2.push_back(it);
        }
    }
    sort(du0.begin() , du0.end());
    sort(du1.begin() , du1.end());
    sort(du2.begin() , du2.end());
    for ( auto it : du0){
        cout << it << " " ;
    }
    for (auto it : du1){
        cout << it << " " ;
    }
    for (auto it : du2){
        cout << it << " " ;
    }
    return 0;
}