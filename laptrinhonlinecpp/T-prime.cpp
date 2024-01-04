#include <iostream>
#include <cmath>
using namespace std;
long long prime[1000000+1];
void sang(){
    fill(prime,prime+1000000+1,1);
    prime[0]=prime[1]=0;
    for ( int i =2 ; i*i < 1000000 ; i++){
        if (prime[i]==1){
            for ( int j = i*i ; j*j < 1000000 ; j+=i){
                prime[j]=0;
            }
        }
    }
}
int squar(long long n){
    int x = sqrt(n);
    return x*x == n;
}
int main(){
    int n ; cin >> n ;
    long long a[100000];
    sang();
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n ; i++){
        if (squar(a[i])){
            long long j = sqrt(a[i]);
            if (prime[j]){
                cout << "YES" << endl ;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl ;
        }
    }
    return 0;
}