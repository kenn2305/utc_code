#include <iostream>
#include <vector>
using namespace std;
using ll = long long ;
ll res(int n){
    if (n % 2 != 0){
        n+=1 ;
    }
    ll sum = 0;
    int cnt = 1 ;
    while (cnt <= 5){
        sum+=n;
        n+=2;
        cnt++;
    }
    return sum ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x ;
    vector<int> a;
    while (true){
        cin >> x;
        if(x == 0){
            break;
        }
        a.push_back(x);
    }
    for ( int i = 0 ; i < a.size() ; i++){
        cout << res(a[i]) << endl ;
    }
    return 0;
}