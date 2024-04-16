
// PREFIX SUM


#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//            Phật phù hộ, không bao giờ BUG
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n ; cin >> n ;
    vector<pair<double,double>> p ;
    p.reserve(n);
    for (int i = 0 ; i < n ; ++i){
        double x , y ; cin >> x >> y ;
        p.push_back(make_pair(x,y));
    }
    vector<double> dif;
    for ( int i =  0; i < n-1 ; ++i){
        double tmp = sqrt(pow(p[i+1].first-p[i].first,2)+pow(p[i+1].second-p[i].second,2));
        dif.push_back(tmp);
    }
    vector<double> prefix;
    prefix.resize(n+120);
    prefix[1] = 0 ;
    for ( int i = 2 ; i <= n ; ++i){
        prefix[i] = prefix[i-1]+dif[i-2];
    }
    int t ; cin >> t ;
    while (t--){
        int l, r ; cin >> l >> r ;
        cout << fixed << setprecision(3) << prefix[r]-prefix[l]*(l>1) << endl;
    }
    return 0;
}