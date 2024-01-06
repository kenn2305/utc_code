#include <iostream>
#include <vector>
#include <set>
using namespace std;
const int MAX1 = 10000001;
const int MAX2 = 10000001;
vector<int> a;
vector<int> b;
void seive1(){
    a.resize(MAX1,1);
    a[0]=a[1]=0;
    for (int i =2 ; i*i <= MAX1 ; i++){
        if (a[i]){
            for ( int j = i*i ; j <= MAX1 ; j+=i){
                a[j]=0;
            }
        }
    }
}
void seive2(){
    b.resize(MAX1,1);
    b[0]=b[1]=0;
    for (int i = MAX2 ; i*i <= 1000000000 ; i++){
        if (b[i]){
            for ( int j = i*i ; j <= 1000000000 ; j+=i){
                b[j]=0;
            }
        }
    }
}
set<int> prime;
void save(){
    seive1();
    seive2();
    for ( int i = 0 ; i <= 1000000 ; i++){
        if (a[i]){
            prime.insert(a[i]);
        }
    }
    for ( int i = 1000000 ; i <= 1000000000 ; i++){
        if (b[i]){
            prime.insert(b[i]);
        }
    }
}
int main(){
    for (auto it : prime){
        cout << it << endl ;
    }
    return 0;
}