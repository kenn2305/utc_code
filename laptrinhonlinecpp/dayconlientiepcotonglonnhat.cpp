
//Kadane Algorithm


#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector<int> a;
    while (n--){
        int x ; cin >> x ;
        a.push_back(x);
    }
    long long sum_tmp = 0 ;
    long long sum_max = -1e18 ;
    for (auto it : a){
        sum_tmp+=it;
        sum_max = max(sum_max,sum_tmp);
        if (sum_tmp < 0) sum_tmp = 0;
    }
    cout << sum_max << endl ;
    return 0;
}