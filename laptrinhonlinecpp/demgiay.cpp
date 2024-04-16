#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n ; cin >> n ;
    unordered_map<int,int> left , right;
    int cnt = 0 ;
    while (n--){
        char x ;
        int i ;
        cin >> x >> i;
        if (x == 'L'){
            left[i] ++;
        } else {
            right[i] ++;
        }
    }
    for (auto it : left){
        if (it.second > 1 )
        cnt += min(it.second , right[it.first]);
    }
    cout << cnt << endl;
    return 0;
}