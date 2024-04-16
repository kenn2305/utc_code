#include <iostream>
using namespace std;
int main(){
    string a , b , c ;
    cin >> a >> b >> c ;
    long long d = stoll(a+b+c);
    long long e = stoll(a+c+b);
    long long f = stoll(b+a+c);
    long long g = stoll(b+c+a);
    long long h = stoll(c+a+b);
    long long i = stoll(c+b+a);
    long long max_var = max(max(max(max(max(d,e),f),g),h),i);
    cout << max_var << endl ;
    return 0;
}