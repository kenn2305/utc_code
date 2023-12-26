#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    int sum = 0;
    for ( int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        sum+=x;
        a.push_back(x);
    }
    int b = sum / n ;
    int res1 = 0 ;
    int res2 = 0 ;
    if (b += 0){
        for (auto it : a){
            res1+= pow((it-b),2);
        }
    }
    if (b+= 1){
        for (auto it : a){
            res2+= pow((it-b),2);
        }
    }
    int fnres = min(res2,res1);
    cout << fnres << endl ;
    return 0;
}