#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a ;
    set<int> s ;
    for (int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        a.push_back(x);
        s.insert(x);
    }

    for ( int i = 0 ; i < a.size() ; i++){
        if (*s.begin() == a[i]){
            cout << "Menor valor: " << a[i] << endl << "Posicao: " << i << endl  ;
            break;
        }
    }

}