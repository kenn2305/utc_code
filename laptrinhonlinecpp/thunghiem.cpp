#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<char, int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        char c;
        int x;
        cin >> x >> c;
        sum+=x;
        mp[c] += x;
    }
    map<char,double> res;
    cout << "Tong so: " << sum << endl ;
    for (auto it : mp){

        if (it.first == 'C'){
            cout << "Tong so tho: " << it.second << endl ;
            double k = (it.second/(double)sum)*100;
            res[it.first]=k;
        } else if (it.first == 'R'){
            cout << "Tong so chuot: " << it.second << endl ;
            double k = (it.second/(double)sum)*100;
            res[it.first]=k;
        } else {
            cout << "Tong so ech: " << it.second << endl ;
            double k = (it.second/(double)sum)*100;
            res[it.first]=k;
        }
    }
    for (auto it : res){
        if (it.first=='C'){
            cout << "Ty le phan tram cua tho: " << fixed << setprecision(2) << it.second << "%" << endl ;
        } else if (it.first=='R'){
            cout << "Ty le phan tram cua chuot: " << fixed << setprecision(2) << it.second << "%" << endl ;
        } else {
            cout << "Ty le phan tram cua ech: " << fixed << setprecision(2) << it.second << "%" << endl ;
        }

    }


    return 0;
}
