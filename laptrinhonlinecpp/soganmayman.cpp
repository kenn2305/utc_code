#include <iostream>
#include <vector>
using namespace std;
int Lucky_Num(int a){
    vector<int> k ;
    while (a!=0){
        k.push_back(a%10);
        a/=10;
    }
    for (auto it : k){
        if (it != 6 && it != 8){
            return 0;
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n ; cin >> n ;
    for ( int i = 1 ; i <= n ; i++){
        if(Lucky_Num(i)){
            if (n % i == 0){
                cout << "YES" << endl ;
                return 0;
            }
        }
    }
    cout << "NO" << endl ;
    return 0;
}