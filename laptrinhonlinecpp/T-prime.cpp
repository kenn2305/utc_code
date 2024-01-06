#include <iostream>
#include <vector>
#include <cmath>
using ll =long long ;
using namespace std;
const int MAXP = 1000001;
vector<int>prime;
void seive(){
    prime.resize(MAXP,1);
    prime[0]=prime[1]=0;
    for ( int i = 2 ; i * i <= MAXP ; i++){
        if (prime[i]==1){
            for ( int j = i*i ; j  < MAXP ; j+=i){
                prime[j] = 0 ;
            }
        }
    }
}
int check_square(ll a){
    ll x = sqrt(a);
    return x*x==a;
}
int main(){
    int n ; cin >> n ;
    seive();
    while (n--){
        ll x ; cin >> x ;
        if (!check_square(x)) cout << "NO" << endl;
        else {
            ll k = sqrt(x);
            if (prime[k]){
                cout << "YES" << endl ;
            } else {
                cout << "NO" << endl ;
            }
        }
    }
    return 0;
}